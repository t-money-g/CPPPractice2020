// do something with triplets 
#include "../include/std_lib_facilities.h"


int main() {
    
    string val1; 
    string val2;
    string val3; 
    cout << " Please enter three names\n ";

    cin >> val1 >> val2 >> val3; 
    
    if(val3 < val2)
    {
        string temp = val3;
        val3 = val2; 
        val2 = temp; 
    }      

    if(val2 < val1)
    {
        string temp = val2;
        val2 = val1; 
        val1 = temp; 

        if(val3 < val2)
        {
            string temp = val3;
            val3 = val2; 
            val2 = temp; 
        }
    }

    
    
    cout << "These three names should be sorted \n";
    cout << val1 << ", " << val2  << ", " << val3;

}