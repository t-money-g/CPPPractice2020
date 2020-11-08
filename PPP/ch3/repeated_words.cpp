// find repeated words from an input string 
#include "../include/std_lib_facilities.h"

int main() {
    string previous = " "; // previous word ; initialized to not a word 
    string current;        // current word 
    while(cin>>current) {  // read a stream of words 
        if(previous == current) 
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
}