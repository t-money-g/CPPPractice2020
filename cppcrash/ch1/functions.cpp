
#include <cstdio>

/**
 * @brief step function - tests if function is greater or less than zero
 * 
 * @param x 
 * @return int 
 */
int step_function(int x) {
    int result = 0;
    if (x < 0) {
        result = -1;
    } else if (x > 0) {
        result = 1;
    }
    return result;
}

int main() {
    
    int num1 = 42;
    int result1 = step_function(num1); //value1 is 1

    int num2 = 0;
    int result2 = step_function(num2);   //value2 is 0

    int num3 = -32767;
    int result3 = step_function(num3); //value2 is -1

    printf("Num1: %d, Step: %d\n", num1, result1);
    printf("Num2: %d, Step: %d\n", num2, result2);
    printf("Num3: %d, Step: %d\n", num3, result3);
    
    // printf format and specifiers that I forgot about
    //printf("Ten %d, Twenty %d, Thirty %d", 10, 20, 30);
    
    return 0;
}