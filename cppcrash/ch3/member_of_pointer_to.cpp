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
    ClockOfTheLongNow clock;
    ClockOfTheLongNow* clock_ptr = &clock;
    clock_ptr->set_year(2020);
    printf("Address of clock: %p\n", clock_ptr);
    printf("Value of clock year: %d", clock_ptr->get_year());
    //  printf("Value of clock's year: %d", (*clock_ptr).get_year()); same output 
}