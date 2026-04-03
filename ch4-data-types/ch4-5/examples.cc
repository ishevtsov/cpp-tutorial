#include <iostream>

void overflow()
{
    unsigned short x{65'535}; // maximum value for a 16-bit unsigned integer
    std::cout << "x was: " << x << "\n";

    x = 65535 + 1; // this will cause overflow
    std::cout << "x after adding 1: " << x << "\n";

    x = 65535 + 2; // this will also cause overflow
    std::cout << "x after adding 2: " << x << "\n";
}

int main()
{
    overflow();
    return 0;
}
