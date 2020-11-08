#include <cstdint>
#include <cstdio>

struct PodStruct {
    uint16_t a;
    char b[256];
    bool c;

};

struct JohanVanDerSmut {
    bool gold = true;
    int year_of_smelting_accident{ 1970 };
    char key_location[8] = { "x-rated" };
};

struct Earth {
    ~Earth() { // Earth's destructor 
        printf("Making way for the hyperspace bypass");
    }
};
// initialize classes 
struct Taxonomist { 
    Taxonomist() {
        printf("(no argument)\n");
    }
    Taxonomist(char x) { 
        printf("char: %c\n", x);
    }
    Taxonomist(int x) {
        printf("int: %d\n", x);
    }
    Taxonomist(float x) {
        printf("float: %f\n", x);
    }
};
int main() {
    PodStruct initialized_pod1{};         // all fields zeroed;
    PodStruct initialized_pod2 = {};      // all fields zeroed;

    PodStruct initialized_pod3{ 42, "hello"};      // Fields a & b set; c = 0;
    PodStruct initialized_pod4{42, "Hello", true};      // all fields set

    // initialization of arrays
    int array_1[]{ 1,2,3,4}; // array of length 3; 1,2,3
    int array_2[5]{}; // array of length 5; 0, 0, 0, 0, 0,
    int array_3[5]{1, 2, 3}; // array of length 5; 1, 2,3, 0, 0,
    int array_4[5]; // array of length 5;unintialized values,

    Taxonomist t1;
    Taxonomist t2{'c'};
    Taxonomist t3{66554};
    Taxonomist t4{ 6.02e23f};
    Taxonomist t5{'g'};
    Taxonomist t6 = {'l'};
    Taxonomist t7{}; // no default parameter
    //Taxonomist t8(); // no output actually this is a function declaration! 

    // narrowing conversions
    float a {1};
    float b {2};
    int narrowed_result(a/b); // nasty narrowing conversio
    //int result{a/b}; nao

    
}