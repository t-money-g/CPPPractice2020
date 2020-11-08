#include <cstdio>

// pods have useful low level features:
// C - combatible 
// allow machine instructionable operations to copy or move them
// can be efficently represneted in memory

// C++ guarantees that members will be sequential in memory, although
// some implementations require members to be algined along word 
// boundaries (depend on register length)
// Order members from largest to smallest within POD definitions 

struct Book { 
    char name[256];
    int year; 
    int pages;
    bool hardcover;
};

int main() {
    Book neuromancer;
    neuromancer.pages = 271;
    printf("Neuromancer has %d pages.", neuromancer.pages);
}