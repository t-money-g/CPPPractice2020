#include <cstddef>
#include <cstdio> 

// this section also mentions std::byte 

int main() {

    //zd for decimal representation 
    //zx or hexidecimal representation 
    size_t size_c = sizeof(char);
    printf("char: %zd\n", size_c);

    size_t size_s = sizeof(short); 
    printf("short: %zd\n",size_s);

    size_t size_i = sizeof(int);
    printf("int: %zd\n", size_i);

    size_t size_l = sizeof(long);
    printf("long %zd\n", size_l);

    size_t size_ll = sizeof(long long);
    printf("long long %zd\n", size_ll);
}