#include <iostream>

/// Largest prime smaller than given number 
// a prime number is a number that has only two divisors 1 and the number
// itself. 
bool is_prime(const int num)
{
    if( num <= 3) { return num > 1; }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    else
    {
        for(int i = 5; i * i <= num; i += 6) //what??? this is so unreadable. 
        {
            if(num % i == 0 || num % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;
    }
} 

int main() 
{
    int limit = 0; 
    std::cout << "Uppe limit:";
    std::cin >> limit;

    for (int i = limit; i > 1; i--)
    {
        if(is_prime(i))
        {
            std::cout << "Largest prime" << i << std::endl;
            return 0;
        }
    }
}