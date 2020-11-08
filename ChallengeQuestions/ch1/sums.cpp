#include <iostream>

// iterate through all numbers from 3 up to the limit
// entered by the user. 
int main() 
{
    unsigned int limit = 0; 
    std::cout << "Upper limit"; 
    std::cin >> limit; 

    //the trick is to be able ot sum up to
    // a larger limit is to use long long and not
    // int or long, which would result in an
    // overflow. 
    unsigned long long sum = 0;

    for(unsigned int i = 3; i < limit; ++i)
    {
        if(i % 3 == 0 || i % 5 == 0)
            sum += i;
    }

    std::cout << "sum=" << sum << std::endl;
}