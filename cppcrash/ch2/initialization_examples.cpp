#include <cstdio>

// just showing off various ways c++ sucks at initializaing things
// this is due to the cruft of c-compatibility 
int main() { 
    int a = 0;  // initialized to 0; 
    int b {};   // also initialized to 0;
    int c = {}; // also initialized to 0;
    int d;      // maybe initialized to 0;

    int e = 42; // initialized to 42; 
    int f{ 42}; // initialized to 42; 
    int g = {42}; // initialized to 42;
    int h(42); // initialized to 42
}