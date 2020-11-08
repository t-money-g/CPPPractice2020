
#include <iostream> 
#include <algorithm>

using namespace std;

// a very simplified vector of doubles (like vector<double>)
class vector {
                    //int size, age0, age1, age2, age3
    int sz;           // the size, should be size_t 
    double* elem;      // pointer to the first element ( of type double)
public: 
    vector(int s)
        :sz{s}, elem{new double[s]}      // constructor: allocate s doubles 
    {
        for(int i = 0; i<s; ++i) elem[i]=0; //initialize elements 
    }
    // vector(initializer_list<double> lst)
    //     :sz{lst.size()}, elem{new double[sz]} 
    // {
    //     copy(lst.begin(), lst.end(), elem);
    // }
    //vector(const vector&);      // copy constructor so we can initialize a vector with another one                    
    ~vector() { delete [] elem; }
    
    int size() const { return sz; } // the current size 
    double get(int n) const { return elem[n];} // access read 
    void set(int n, double v) { elem[n]=v;}    // access write 

    vector& operator=(const vector& a); // copy assignment 
};

vector::vector(const vector& arg) 
// allocate elements, then initialize them by copying 
    :sz{arg.sz}, elem{new double[arg.sz]}
{
    copy(arg, arg+sz, elem); // std copy 
}

int main() {

    int var = 17; 
    int* ptr = &var; 


    char ch1 = 'a';
    char ch2 = 'b';
    char ch3 = 'c'; 
    char ch4 = 'd'; 
    // int* pi = &ch3; // point to ch3, a char-size piece of memory 
    //                 // error: we cannot asign a char* to an int*
    // *pi = 12345;    // write to an int-size piece of memory 
            
    // vector<double> age(4); // a vector of 4 elements of type double 
    // age[0] = 0.33;
    // age[1] = 22.0;
    // age[2] = 27.2;
    // age[3] = 54.2; 


    vector v(5);
    for(int i=0; i<v.size(); ++i) {
        v.set(i, 1.1*i); 
        cout << "v[" << i <<"]==" << v.get(i) << '\n';
    }
}