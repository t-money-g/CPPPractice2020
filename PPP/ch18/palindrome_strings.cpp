#include "../include/std_lib_facilities.h"

// find a palindrome - or a word that is spelled the same way 
// forwards and backwards fwd & reverse , examples are:
// anna
// wow
// poop
// 

bool is_palindrome(const string& s)
{
    int first = 0;  // index of first letter 
    int last = s.length()-1; // index of last letter  
    while(first < last) { // we haven't reached the middle
        if (s[first] != s[last]) return false;
        ++first;
        --last;
    }
    return true; 
}

int main()
{
    for(string s; cin>>s;) {
        cout << s << " is";
        if(!is_palindrome(s)) cout << " not";
        cout << " a palindrome\n";
    }
}