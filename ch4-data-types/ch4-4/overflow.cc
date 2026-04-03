#include <iostream>

void integer_division()
{
    std::cout << 8 / 5 << '\n';
}

void overflow()
{
    int a{2'147'483'647}; // maximum value for a 32-bit signed integer
    std::cout << "a: " << a << "\n";

    a = a + 1;                                      // this will cause overflow
    std::cout << "a after adding 1: " << a << "\n"; // the result is undefined behavior
}

int main()
{
    overflow();

    integer_division();

    return 0;
}
