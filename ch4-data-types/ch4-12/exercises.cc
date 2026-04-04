#include <iostream>

void print(double x)
{
    std::cout << x << std::endl;
}

void print1(int x)
{
    std::cout << x << std::endl;
}

void print2(int x)
{
    std::cout << x << std::endl;
}

int main()
{
    print(5);
    print1(5.5);                   // Implicit conversion from double to int, will print 5
    print2(static_cast<int>(5.5)); // Explicit conversion from double to int, will print 5

    char ch{97};
    std::cout << ch << std::endl;                   // Will print 'a' since 97 is the ASCII code for 'a'
    std::cout << static_cast<int>(ch) << std::endl; // Will print 97, the ASCII code for 'a'

    return 0;
}
