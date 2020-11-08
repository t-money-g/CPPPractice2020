#include <cstdio>

struct ClockOfTheLongNow{
//class ClockOfTheLongNow{
    
//    int year; // classes make fields private by default

public:

    //constructor 
    ClockOfTheLongNow(){
        year = 2020;
    }
    ClockOfTheLongNow(int year_in) {
        if(!set_year(year_in)) {
            year = 2020;
        }
    }
    


   

    // access controls , restruct class- memberaccess , 

    bool set_year(int new_year)  {
        if (new_year < 2020) return false;
        year = new_year;
        return true;
    }
    int get_year() {
        return year;
    }

// prevents direct access by default struct:
private:
     int year; 
};

void add_year(ClockOfTheLongNow& clock) {
    clock.set_year(clock.get_year() + 1); // no deref operator needed 
}

int main() { 
    ClockOfTheLongNow clock; 
    printf("The year is %d.\n", clock.get_year());
    add_year(clock);    // Clock is implicitly passed by reference!
    printf("This year is %d\n", clock.get_year());
}