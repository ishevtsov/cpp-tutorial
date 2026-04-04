#include <iostream>

void printInt(const int x)
{
    std::cout << x << std::endl;
}

int main()
{
    printInt(5); // Will print 5
    printInt(6); // Will print 6

    return 0;
}
