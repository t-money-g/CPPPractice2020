#include <cstdio>

int main() {
    
    //Declaring variables 
    int the_answer = 42;

    int lucky_number = the_answer / 6;

    //conditional statements 
    int x = 0;
    42 == x; // Equality 
    42 != x; // inequality 
    100 > x; // Greater than 
    123 >= x; // Greater than or equal to 
    -10 > x; // Greater than 
    -99 <= x; // less than or equal to 

    if (x > 0) printf("Positive.");
    else if (x < 0) printf("Negative"); 
    else printf("Zero");
    
}