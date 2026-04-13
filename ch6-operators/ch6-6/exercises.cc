#include <iostream>

int getValue()
{

    std::cout << "Enter a number: ";
    int n{};
    std::cin >> n;
    return n;
}

int main()
{
    int x{getValue()};
    int y{getValue()};
    int max{(x > y) ? x : y};
    std::cout << "The max of  " << x << " and " << y << " is: " << max << std::endl;

    constexpr bool inBigClassroom{false};
    constexpr int classSize{inBigClassroom ? 30 : 20};
    std::cout << "The class size is: " << classSize << std::endl;

    x = 2;
    std::cout << (x < 0) ? "Negative" : "Non-negative"; // This line will not compile due to operator precedence

    return 0;
}
