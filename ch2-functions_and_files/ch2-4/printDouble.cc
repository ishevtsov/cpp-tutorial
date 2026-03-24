#include <iostream>

int getValueFromUser()
{
    int input{};
    std::cout << "Enter a number: ";
    std::cin >> input;

    return input;
}

void printDouble(int value)
{
    std::cout << value << " double is: " << value * 2 << std::endl;
}

int main()
{
    printDouble(getValueFromUser());

    return 0;
}
