#include <iostream>

int main()
{
    std::cout << "Enter two numbers separated by a space: ";

    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    std::cout << "You entered " << x << " and " << y << '\n';
    return 0;
}
