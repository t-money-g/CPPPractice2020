#include <cstdio>

// global static 
// static int rat_things_power = 200;
// global static 
// extern static int rat_things_power = 200;

void power_up_rat_thing(int nuclear_isotopes) {
    //local static 
    static int rat_things_power = 200;
   
    rat_things_power = rat_things_power + nuclear_isotopes;
    const auto  waste_heat = rat_things_power * 20;
    if (waste_heat > 10000) {
        printf("warning! hot doggie!\n");
    }
    printf("Rat-thing power: %d\n", rat_things_power);

}

int main() {
   // printf("Rat-thing power: %d\n", rat_things_power);
    power_up_rat_thing(100);
    //printf("Rat-thing power: %d\n", rat_things_power);
    power_up_rat_thing(500);
    //printf("Rat-thing power: %d\n", rat_things_power);
    
}