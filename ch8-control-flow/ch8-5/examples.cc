#include <iostream>

void printDigitName(int digit)
{
    switch (digit)
    {
    case 1:
        std::cout << "One";
        break;
    case 2:
        std::cout << "Two";
        break;
    case 3:
        std::cout << "Three";
        break;
    default:
        break;
    }
}

int main()
{
    printDigitName(2);
    std::cout << std::endl;

    return 0;
}
