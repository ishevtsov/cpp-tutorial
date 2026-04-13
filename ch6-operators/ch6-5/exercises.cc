#include <iostream>

int main()
{
    int x{1};
    int y{2};

    std::cout << (++x, ++y) << '\n'; // x is incremented to 2, y is incremented to 3, and the value of the expression is the value of y, which is 3
    return 0;
}
