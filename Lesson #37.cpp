#include <iostream>
using namespace std;

int main() {
    int x;
    int* p;

    // ? Wrong!
    // p is a pointer (an address), but x is just a value (int)
    // p = x; // This would cause a compiler error

    // ? Correct!
    // p is an address, and so is &x
    p = &x;

    // ? Wrong!
    // &x is an address, but *p expects a value to assign
    // *p = &x; // This is invalid: can't assign an address to an int

    // ? Correct!
    // *p is the value that p points to, and x is a value — this is valid
    *p = x;

    return 0;
}
