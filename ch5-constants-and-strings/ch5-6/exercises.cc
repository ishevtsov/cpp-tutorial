#include <iostream>

// The return value of a non-constexpr function is not constexpr
int five()
{
    return 5;
}

int main()
{
    constexpr double gravity{9.81};   // OK: gravity is constexpr
    constexpr int sum{4 + 5};         // OK: sum is constexpr
    constexpr int something{sum * 2}; // OK: something is constexpr

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    // constexpr int myAge{age}; // compile Error: age is not constexpr
    // constexpr int f{five()};  // compile Error: five() is not constexpr

    return 0;
}
