// test to see if some values are even or odd.
#include "../include/std_lib_facilities.h"


int main () { 
    int a = 0;

    cout << "please enter a numbers\n";
    cin >> a; 

    if ( a % 2 == 0)
        cout << a << " is even\n"; 
    else
    {
        cout << a << " is odd\n";
    }

    cout << "Thank you\n";
    
}