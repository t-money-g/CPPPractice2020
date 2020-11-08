#include <iostream>

using namespace std;
// greatest common divisor, of two or more non-zero integers
// the greatest positive interger that divides all of them 

unsigned int gcd(unsigned int const a, unsigned int const b)
{
    return b == 0 ? a : gcd(b, a % b);
}

// non recursive implementation of Euclid's algorithm should look like this
// unsigned int gcd(unsigned int a, unsigned int b)
// {
//     while(b != 0){
//         unsigned int r = a % b;
//         a = b;
//         b = r;
//     }
//     return a; 
// }

int main () {

    unsigned int a = 10; 
    unsigned int b = 25; 

    cout << gcd(a, b) << endl;

}