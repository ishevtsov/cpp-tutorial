#include <iostream>

int main()
{
    std::cout << "Enter a number: "; // ask a user a number

    int x{};
    std::cin >> x; // get a number from keyboard and store it in a variable

    std::cout << "You entered " << x << '\n';
    return 0;
}
