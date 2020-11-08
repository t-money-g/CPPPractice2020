#include <cstdio>

// puts all of its membember s in the same place 
// packing bitfields 
// dealing with type checking

union Variant { 
    char string[10];
    int integer;
    double floating_point;
};
// the union variant can be interpreted as a char[10] an int or a double. 
// it takes only as much memory as its largest member
int main() { 

    Variant v; 
    v.integer = 42; 
    printf("The ultimate answer: %d\n", v.integer);
    v.floating_point = 2.7182818284;
    printf("Eulers number e:   %f\n", v.floating_point);
    printf("A dumpster fire:    %d\n", v.integer );
}