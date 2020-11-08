// convert from yen, euros, and pounds into dollars 
// a suffix 'y','u','p' indicates the unit of the input 
// any other suffix is an error 
#include "../include/std_lib_facilities.h"

int main() 
{
     
    constexpr double yen_per_dollar = 107.359; // jpy to dollar 
    constexpr double euro_per_dollar =  0.888400;  // euro per dollar
    constexpr double pound_per_dollar =  0.798463; // euro per dollar
    
    double amount = 1;                     // amount in y, e, p, 

    char unit = ' ';                        // a space is not a unit 
    cout << "Please enter a length followed by a curency(y, u, p):\n";
    cin >> amount >> unit; 
    if (unit == 'y')
        cout << amount << "yen == " << amount / yen_per_dollar << " dollars\n";
    else if (unit == 'u')
        cout << amount << "euro == " << amount / euro_per_dollar << " dollars\n";
    else if (unit == 'p')
        cout << amount << "pound == " << amount / pound_per_dollar << " dollars\n";
    else
        cout << "Sorry, I don't know a currency called '" << unit << "'\n";
}