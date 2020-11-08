#include <cstdio>

struct College {
    char name[256];
};

void print_names(College* college_ptr, size_t n_colleges) {
    for(size_t i = 0; i < n_colleges; i++) {
        printf("%s College\n", college_ptr[i].name);
    }
}

void print_name(College* college_ptr) {
    printf("%s College\n", college_ptr->name);
}

int main() {
    //College best_college[] = { "Magdalen", "Nuffield", "Kellogg"}; 
    College oxford[] = { "Magdalen", "Nuffield", "Kellogg"}; 
    
    //print_name(best_college); decayed version
    print_names(oxford, sizeof(oxford)/ sizeof(College));

    // pointer arithmatic 
    College* third_college_ptr = &oxford[2];

    //College* third_college_ptr = oxford + 2;
}