#include <cstdio>

struct ClockOfTheLongNow{
//class ClockOfTheLongNow{
    
//    int year; // classes make fields private by default

public:

    //constructor 
    // ClockOfTheLongNow(){
    //     year = 2020;
    // }
    ClockOfTheLongNow(int year_in) {
        if(!set_year(year_in)) {
            year = 2020;
        }
    }
    


    // method - member function  
    void add_year() {
        year++;
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

int main() {
    ClockOfTheLongNow clock{2020};
    // // initializing members 
    // if(!clock.set_year(2019)) { 
    //     clock.set_year(2020);
    // }
    
    //clock.year = 2017;
    //clock.set_year(2017); // wont work 
    //clock.set_year(2020);  

    clock.add_year();
    printf("next year: %d\n", clock.get_year());
    //printf("year: %d\n", clock.year); // nope private
    
    clock.add_year();
    printf("next year + 1: %d\n", clock.get_year());

    //printf("year: %d\n", clock.year);

}