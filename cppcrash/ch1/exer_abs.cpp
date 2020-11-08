
#include <cstdio>

int absolute_value(int x) {
    int result = 0;
    
    if(x < 0)
        result = x * -1;
    else
        result = x;
    
    return result;
}

int main() {
    int my_num = -1000010;
    int positive = 32;
    printf("The absolute value of %d is %d.\n", my_num,absolute_value(my_num));
    printf("The absolute value of %d is %d.\n", positive, absolute_value(positive));
}