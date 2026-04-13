#include <iostream>

void pref()
{
    int x{5};
    int y{++x}; // x is incremented to 6, x is evaluated to the value 6, and 6 is assigned to y

    std::cout << x << " " << y << '\n';
}

void postf()
{
    int x{5};
    int y{x++}; // x is evaluated to the value 5, 5 is assigned to y, and then x is incremented to 6

    std::cout << x << " " << y << '\n';
}

int main()
{
    pref();
    postf();

    return 0;
}
