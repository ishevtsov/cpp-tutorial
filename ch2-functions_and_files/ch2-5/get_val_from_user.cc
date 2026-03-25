#include <iostream>

int getValFromUser()
{
    std::cout << "Enter an integer: ";
    int val{};
    std::cin >> val;

    return val;
}

int main()
{
    int num{getValFromUser()};

    std::cout << "You entered: " << num << '\n';

    return 0;
}
