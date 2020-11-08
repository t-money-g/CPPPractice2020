// This program outputs the message "Hello, World!" to the monitor

#include "../include/std_lib_facilities.h"


int main() {
    cout << "Hello, World!\n"; // output "Hello, World"
    keep_window_open(); // wait for a character to be entered; not needed on cmd line. 
    return 0;
}