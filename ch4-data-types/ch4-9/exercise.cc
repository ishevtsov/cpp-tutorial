#include <iostream>

void bool_failed()
{
    bool b{}; // default initialization to false
    std::cout << "Enter a boolean value: ";
    std::cin >> b;
    std::cout << "You entered: " << b << std::endl;
}

void bool_success()
{
    bool b{}; // default initialization to false
    std::cout << "Enter a boolean value: ";
    std::cin >> std::boolalpha; // enable boolalpha to read true/false
    std::cin >> b;

    std::cout << std::boolalpha; // enable boolalpha for output as well
    std::cout << "You entered: " << b << std::endl;
}

bool isEqual(int a, int b)
{
    return a == b; // returns true if a and b are equal, false otherwise
}

int main()
{
    // bool_failed();
    // bool_success();

    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << std::boolalpha; // enable boolalpha for output
    std::cout << x << " and " << y << " are equal? ";
    std::cout << isEqual(x, y) << std::endl;

    return 0;
}
