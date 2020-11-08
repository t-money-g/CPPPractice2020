// read name and age (2nd version)
#include "../include/std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age in years\n";
    string first_name ="???"; // string variable
                              // ("???") means "don't know the name"
    double age = 0.0;         // double  variable (0 means we don't know the age")
    cin >> first_name >> age; // read a string followed by an integer 
    cout << "Hello, " <<first_name << " (age: " << age * 12.0 << " months )\n";
    return 0;
}