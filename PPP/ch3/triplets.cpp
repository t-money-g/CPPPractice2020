// do something with triplets 
#include "../include/std_lib_facilities.h"


int main() {
    
    int val1 = 0; 
    int val2 = 0;
    int val3 = 0; 
    cout << " Please enter three numbers\n ";

    cin >> val1 >> val2 >> val3; 
   
    if(val3 < val2)
    {
        int temp = val3;
        val3 = val2; 
        val2 = temp; 
    }      

    if(val2 < val1)
    {
        int temp = val2;
        val2 = val1; 
        val1 = temp; 

        if(val3 < val2)
        {
            int temp = val3;
            val3 = val2; 
            val2 = temp; 
        }
    }

    
    
    cout << "These three numbers should be sorted \n";
    cout << val1 << ", " << val2  << ", " << val3;

}