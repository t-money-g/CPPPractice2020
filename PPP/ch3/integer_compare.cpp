// integer operations 
#include "../include/std_lib_facilities.h"

int main() {
    // int val1 = 0;
    // int val2 = 0;
    double val1 = 0;
    double val2 = 0;
    cout << "Enter two numbers\n";
    cin >> val1 >> val2;

    cout << "printing stats\n"; 

    if ( val1 < val2) 
        cout << val1 << "is less than\n " << val2; 
    if ( val1 > val2)
        cout << val1 << "is greater than\n " << val2;

    cout << val1 << "+" << val2 << " == " << val1 + val2 << '\n';
    cout << val1 << "-" << val2 << " == " << val1 - val2 << '\n';
    cout << val1 << "*" << val2 << " == " << val1 * val2 << '\n';
    cout << val1 << "/" << val2 << " == " << val1 / val2 << '\n';
    



}