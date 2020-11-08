#include "../include/std_lib_facilities.h"


// wow ok , so I wouldn't have never done it this way. 

//------------------------------------------------------------------------------

class Token {
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value 
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }    
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

//------------------------------------------------------------------------------


class Token_stream {
public: 
    Token_stream();   // make a Token_stream that reads from cin
    Token get();      // get a Token (get() is defined elsewhere)
    void putback(Token t);    // put a Token back
private:
    bool full{false};        // is there a Token in the buffer?
    Token buffer;     // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
:full(false), buffer(0)    // no Token in buffer
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full = true;      // buffer is now full
}

//------------------------------------------------------------------------------

Token Token_stream::get()
{
   
    if (full) {       // do we already have a Token ready?
        // remove token from buffer
        full=false;
        return buffer;
    } 
    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
    case ';':    // for "print"
    case 'q':    // for "quit"
    case '(': case ')': case '+': case '-': case '*': case '/': 
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '9':
        {    
            cin.putback(ch);         // put digit back into the input stream
            double val;
            cin >> val;              // read a floating-point number
            return Token('8',val);   // let '8' represent "a number"
        }
    default:
        error("Bad token");
    }
}

//------------------------------------------------------------------------------

Token_stream ts;        // provides get() and putback() 
// functions to match the grammar rules: 

double expression(); // deal with + and -

/* Primary:
    Number
    "(" Expression ")"
*/
double primary() 
{
    Token t = ts.get();
    switch(t.kind) {
        case '(': // handle '(' expression ');
            {
                double d = expression();
                //t = get_token();
                t = ts.get();
                if(t.kind != ')') error("')' expected!");
                return d;
            }
        case '8':       // we use '8' to represent a number 
            return t.value;  // return the number's value
        default:
            error("primary expected");
    }
}

/* Term:
        Primary
        Term '*' Primary
        Term '/' Primary
*/
double term() 
{
    double left = primary();
    //Token t = get_token();
    Token t = ts.get();

    while(true) {
        switch(t.kind) {
            case '*':
                left *= primary();
                //t = get_token();
                t = ts.get();
                break;
            case '/':
            {    
                double d = primary();
                if(d == 0) error ("divide by zero");
                left /=d;
                //t = get_token();
                t = ts.get();
                break;
            }
            // case '%': can't mod a double
            //     left %= primary();
            //     t = get_token();
            //     break;
            default:
                ts.putback(t);
                return left; 
        }
    }
}



/* Expression:
    Term
    Expression "+" Term // addition 
    Expression "-" Term // subtraction 
*/
double expression() {
    //double left = expression(); read and evaluate an expression unfortunately we can't know if where
                                 // we are in the expression so this would potentially cause infinite recursion 

    double left = term();
    //Token t = get_token();      //get the next token 
    Token t = ts.get(); 

    while (true) {
        switch(t.kind) {
            case '+':
                left += term();         //evaluate Term and add
                //t = get_token();
                t = ts.get(); 
                break;
            case '-':
                left -= term();         //evaluate Term and subtract 
                //t = get_token();
                t = ts.get();
                break;
            default:
                ts.putback(t); // put t back into the token stream 
                return left;            // no more + or - just return the answer;
        }
    }
    
    // previous iteration , old code bad doesn't actually parse according to the grammar 
    // switch(t.kind) {            // what kind of token is this 
    //     case '+':
    //         return left + expression(); // read and evaluate a an expression then do add  
    //     case '-':
    //         return left - expression();  // read and evaluate an expression then do a substraction
                                        
    //     default:                        // not a expression but actually a term so return it.  
    //         return left;
    // }
}

int main() 
{
    try {
        // while (cin)
        //     cout << "=" << expression() << '\n';

        double val = 0;
        while(cin) {
            Token t = ts.get();

            if(t.kind == 'q') break;     // 'q' for 'quit' 
            if(t.kind == ';')           // ';' for 'print now
                cout << "=" << val << '\n';
            else
                ts.putback(t);
            val = expression();
        } 
    }
    catch(exception& e) {
        cerr << e.what() << '\n'; 
        return 1; 
    }
    catch (...) {
        cerr << "exception\n";
        return 2; 
    }
}