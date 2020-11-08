// square a number by iteration ,i.e. no multiplication 

#include "../include/std_lib_facilities.h"

int square(int x) {
    int result = 0;
    int times = 0;
    
    while(times < x) {
        ++times;
        result += x;
    }
    return result;
}
int main() {
    cout << "2 squared" << " == " <<  square(2)  << '\n';
    cout << "3 squared" << " == " <<  square(3)  << '\n';
    cout << "4 squared" << " == " <<  square(4)  << '\n';
    cout << "5 squared" << " == " <<  square(5)  << '\n';

}