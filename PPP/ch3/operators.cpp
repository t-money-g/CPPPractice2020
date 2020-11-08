// simple program to exercise operators 
#include "../include/std_lib_facilities.h"

int main() 
{
    cout <<"Please enter an integer value:";
    //double n;
    int n;
    cin >> n;
    double copy_n = n;
    cout << "n== " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == "<<3*n
         << "\ntwice n == " << n+n
         << "\nn squared == " << n*n
         << "\nhalf of n== " << n/2
         << "\nsquare root of n== " << sqrt(copy_n)
         << "\nn++ == " << n++
         << "\nn-- == " << n--
         << "\nn%2 == " << n%2

         << '\n'; // another name for newline ("end of line") in output


    
}
