// convert miles to kilometers 
#include "../include/std_lib_facilities.h"


int main() {

    double miles = 0.0;
    double kilometer_per_mile = 1.609;
    cout << "Enter miles:\n";
    while(cin >> miles) {

        cout << "There are "<<  kilometer_per_mile * miles << " kilometers per mile.\n";
        cout << "Enter miles, or q to quit?\n"; 
    
    }
    
}