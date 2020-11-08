#pragma once 

class Token {

public:

    char kind; // what kind of token aritmatic operator, grouping or numeric value .... 8 for numeric. 
    double value;
    Token();
    Token(char ch) /// make a token from a char 
        :kind(ch), value(0) {}
    Token(char ch, double val) 
        :kind(ch), value(val) { }
};