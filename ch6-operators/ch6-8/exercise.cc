#include <iostream>

void logicalNOT()
{
    int x{5};
    int y{7};

    if (!(x > y))
        std::cout << x << " is not greater than " << y << std::endl;
    else
        std::cout << x << " is greater than " << y << std::endl;
}

void logicalOR()
{
    std::cout << "Enter a number: ";
    int value{};
    std::cin >> value;

    if (value == 0 || value == 1)
        std::cout << "You entered 0 or 1." << std::endl;
    else
        std::cout << "You did not enter 0 or 1." << std::endl;
}

void logicalAND()
{
    std::cout << "Enter a number: ";
    int value{};
    std::cin >> value;

    if (value > 10 && value < 20)
        std::cout << "Your value is between 10 and 20." << std::endl;
    else
        std::cout << "Your value is not between 10 and 20." << std::endl;
}

int main()
{
    std::cout << (!5 || !6) << std::endl; // This will print 1 because both 5 and 6 are non-zero
    // logicalNOT();
    // logicalOR();
    // logicalAND();
    return 0;
}
