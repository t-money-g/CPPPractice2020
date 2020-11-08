/**
 * @file switch_enum_type.cpp
 * @author your name (you@domain.com)
 * @brief Demonstrates User defined types, scoped enums
 * @version 0.1
 * @date 2020-05-24
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <cstdio>

enum class Race { 
    Dinan, 
    Teklan,
    Ivyn,
    Moiran,
    Camite, 
    Julian,
    Aidan
};

int main() {
    Race race = Race::Teklan;

    switch(race) {
        case Race::Dinan: {
            printf("You work hard.");
        } break;
        case Race::Teklan: {
            printf("You are very strong!"); 
        } break;
        case Race::Ivyn: {
            printf("You are a great leader!");
        } break;
        case Race::Moiran: {
            printf("my, how versatile you are!");
        } break;
        case Race::Camite: {
            printf("You're incredibly helpful");
        } break;
        case Race::Julian: {
            printf("Anything you want!");
        } break;
        default: { 
            printf("Error: unknown race!");
        }

    }
}