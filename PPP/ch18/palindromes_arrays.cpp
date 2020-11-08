
#include "../include/std_lib_facilities.h"

bool is_palindrome(const char s[], int n)  // s points to the first character of an array of characters 
{
    int first = 0;      // index of the first letter 
    int last = n - 1;   // index of the last letter 
    while(first < last) {
        if(s[first]!=s[last]) return false; 
        ++first;
        --last; 
    }
    return true;
}

// safely read a buffer without overflowing the array 
istream& read_word(istream&is, char* buffer, int max) 
{
    is.width(max);      // rread at most max-1 characters in the next >> 
    is >> buffer;       // read whitespace-terminated word,
                        // add zero after the last character read into buffer 
    return is;        
}

int main()
{
    constexpr int max = 128; 
    for(char s[max]; read_word(cin,s,max); ) {
        cout << s << " is";
        if(!is_palindrome(s, strlen(s))) cout << " not";
        cout << " a palindrome\n"; 
    }
}