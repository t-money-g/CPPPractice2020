#include <cstdio>

struct ClockOfTheLongNow {
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
    int get_year() const {
        return year;
    }

// prevents direct access by default struct:
private:
     int year; 
};

struct Avout { 
    const char* name = "Erasmas";
    ClockOfTheLongNow apert;

// member initializer lists
    Avout(const char* name, long year_of_apert) 
      : name { name } , apert { year_of_apert} {}

    void announce() const {
        printf("My name is %s and my next apert is %d. \n", name, apert.get_year());
    }
};

void does_not_compile(const Avout& avout) {
   // avout.apert.add_year(); // compilation error avout is const;
}


bool is_leap_year(const ClockOfTheLongNow& clock) {
    if(clock.get_year() % 4 > 0) return false;
    if(clock.get_year() % 100 > 0) return true;
    if(clock.get_year() % 400 > 0) return false;
    return true;
}

int main() {
    Avout raz{ "Erasmas", 3010};
    Avout jad{ "Jad", 4000};
    raz.announce();
    jad.announce();

}