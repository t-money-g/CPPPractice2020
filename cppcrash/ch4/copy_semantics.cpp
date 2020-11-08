
#include <cstdio>

// a program illustrating that passing by value generates a copy
int add_one_to(int x) {
    x++;
    return x;
}


// memberwise
struct Point {
    int x, y;
};

Point make_transpose(Point p) { // bitwise 
    int tmp = p.x;
    p.x = p.y;
    p.y = tmp;
    return p;
}

int main() {
    auto original = 1;
    auto result = add_one_to(original);
    printf("Original: %d; Result; %d", original , result);
}