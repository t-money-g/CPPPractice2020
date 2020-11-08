#include <cstdio>
#include <utility>
void ref_type(int &x) {
    printf("lvalue reference %d\n", x);
}

void ref_type(int &&x) {
    printf("rvalue references %d\n", x);
}

int main() { 
    auto x = 1;
    ref_type(std::move(x)); // changes x from an lvalue to an rvalue
    ref_type(2);
    ref_type(x + 2);
}