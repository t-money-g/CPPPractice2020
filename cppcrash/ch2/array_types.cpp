#include <cstdio>
#include <cstddef>

int main() {

    //accessing array elements 
    int arr[] = {1, 2, 3, 4};
    printf("The third element is %d.\n", arr[2]);
    arr[2] = 100;
    printf("The third element is %d.\n", arr[2]);

    // for loops 
    unsigned long maximum = 0;
    unsigned long values[] = { 10, 50, 20, 40, 0};

    // I'd like to write more functions like this 
    for(size_t i=0; i < 5; i++) {
        if(values[i] > maximum) maximum = values[i];
    }

    // range based for loop 
    for(unsigned long value : values) {
        if(value > maximum) maximum = value;
    }
    printf("The maximum value is %lu\n", maximum);

    // number of elements in an array 
    short array[] = {104, 105, 32, 98, 104, 105, 108, 0};
    // sizeof(array) returns the total number of bytes in the array
    // sizeof(short) returns number of bytes the type takes up
    // therefoe sizeof(array) = sizeof(short) * 8 
    //          sizeof(array) = 2 * 8 
    //          16 bytes; 
    size_t n_elements = sizeof(array) / sizeof(short);
    
    printf("size of array equals %zd \n",sizeof(array));
    printf("size of short equals %zd \n",sizeof(short));
    printf("length of array is  %zd \n",n_elements);

}