/**
 * @file char_arrays.cpp
 * @author your name (you@domain.com)
 * @brief an example of character arrays which uh combines , characters
 * loops and arrays to print the alphabate lowercase and uppercase
 * @version 0.1
 * @date 2020-05-24
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <cstdio>

int main() {
    char house[] = "a house of gold";
    printf("A book holds %s\n", house);

    char alphabet[27];

    for(int i = 0; i<26; i++){
        alphabet[i] = i + 97;
    }

    alphabet[26] = 0;
    // you can just print arrays? wow
    printf("%s\n", alphabet);
    for(int i = 0; i<26; i++) {
        alphabet[i] = i + 65;
    }
    printf("%s", alphabet);
}