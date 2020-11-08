#include <cstdio>

int sum(int a, int b){ 
    return a + b;
}

int main () {

    int num1 = 42;
    int num2 = 0;
    int num3 = -32767;
    int num4 = 383;
    int num5 = 9393;
    int num6 = 3424;

    printf("sum of %d and %d, is: %d\n", num1, num2, sum(num1, num2));
    printf("sum of %d and %d, is: %d\n", num3, num4, sum(num3, num4));
    printf("sum of %d and %d, is: %d\n", num5, num6, sum(num5, num6));
    
    
    return 0;
}