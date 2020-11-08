
struct Dwarf{

};


Dwarf dwarves[13];

struct Contract {
    void add(const Dwarf&);
};

void form_company(Contract &contract) {
    
    for (const auto& dwarf : dwarves) {
        contract.add(dwarf);
    }
}
int main() {

    int answer = 42;
    auto the_answer { 42 };     // int 
    auto foot { 12L };          // long 
    auto rootbeer { 5.0 };      // float
    auto cheesburger { 10.0 };    // double
    auto politifact_claims{ false }; // bool
    auto cheese {"sting" };

    auto year { 2019 };         // int 
    auto& year_ref = year;      // int&
    const auto& year_cref = year; // const int&
    auto* year_ptr = &year;       // int*
    const auto* year_cptr = &year; //const  int *

}
