#include <iostream>

void number_eval()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    if (x > 0)
        std::cout << "The number is positive." << std::endl;
    else if (x < 0)
        std::cout << "The number is negative." << std::endl;
    else
        std::cout << "The number is zero." << std::endl;
}

bool isEqual(int a, int b)
{
    return a == b; // returns true if a and b are equal, false otherwise
}

int main()
{
    // number_eval();
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    if (isEqual(x, y))
        std::cout << x << " and " << y << " are equal." << std::endl;
    else
        std::cout << x << " and " << y << " are not equal." << std::endl;

    return 0;
}
