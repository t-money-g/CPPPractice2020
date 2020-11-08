
#include "../include/std_lib_facilities.h"

// calculate and print a table of 0-99

int main() 
{
    int i = 0;  // start from 0 
    while(i<100) {
        cout << char('a' + i) << '\t' << int('a' + i) << '\n';
        ++i; // increment i (that is, i becomes i+1)
    }
}
