// chapter 4 drills 
#include "../include/std_lib_facilities.h"

int main() 
{
    double somenum = 0;
    double someothernum = 0;
    
    double smallest = 0; 
    double largest  = 0;
    
    constexpr double meter_to_cm = 100; 
    constexpr double inch_to_cm = 2.54;
    constexpr double feet_to_in = 12; 

    vector<double> values; 
    double sum = 0;
    string unit = " "; 
    cout << "Enter numers with units cm, in , ft, m \n";

    while(cin >> somenum >> unit)
    {
        if(somenum == '|' || someothernum == '|' )
            break;

        if(unit == "y" || unit == "yard" || unit == "meter" || unit == "km" || unit == "gallons" )
        {
            cout  << unit << '\n';
            cout << "Illegal unit please enter cm, m, ft or in after a number\n";
            continue;
        }

        // cout << "You entered " << somenum << unit << '\n';
        //                     //<< someothernum <<'\n';
        

        double value_in_meters = 0; 
        if(unit == "cm")  {         // this could be done with a switch / case statemen
            value_in_meters = somenum / meter_to_cm; 
        }
        else if ( unit == "ft") {
            double inches = somenum * feet_to_in; 
            double inches_in_cm = inches * inch_to_cm;
            value_in_meters = inches_in_cm / meter_to_cm;
        } 
        else if ( unit == "in") {
            double inches_in_cm = somenum * inch_to_cm;
            value_in_meters = inches_in_cm / meter_to_cm;
        }
        else
            value_in_meters = somenum; 

        if(value_in_meters < smallest || smallest == 0)  {
            smallest = value_in_meters;
        }
        if (value_in_meters > largest) {
            largest = value_in_meters;
        }
        values.push_back(value_in_meters);
        sum += value_in_meters;

    }

    cout << "Report\n";
    
    sort(values);

    for(double value : values) 
        cout << value << 'm' << '\n';
    
    cout << "The smallest number is " << smallest << "m\n"; 
    cout << "The largest number is " << largest << "m\n";
    cout << "The sum of all the numbers in meters is " << sum << "m\n";
    
    cout << "Goodbye!\n";
}