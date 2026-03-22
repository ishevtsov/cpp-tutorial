#include <iostream>

int main()
{
    int a; // default-initialization (no initializer) value is indeterminate

    // Traditional forms:
    int b = 5; // copy-initialization
    int c(6);  // direct-initialization

    // Modern (prefered):
    int d{7}; // list-initialization
    int e{};  // value-initialization (empty baraces)

    int width{5}; // define a variable and initialize with initial value
    std::cout << width;

    return 0;
}
