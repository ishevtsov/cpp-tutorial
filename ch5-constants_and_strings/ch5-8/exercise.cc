#include <iostream>
#include <string_view>
#include <string>

void printSV(std::string_view str)
{
    std::cout << "String_view: " << str << std::endl;
}

void printString(std::string str)
{
    std::cout << "String: " << str << std::endl;
}

int main()
{
    std::string_view sv{"Hello, World!"}; // Create a string object
    printSV(sv);                          // Pass the string to the function

    // printString(sv); // Implicitly converts string_view to string Fails
    std::string s{sv}; // Explicitly convert string_view to string
    printString(s);

    printString(static_cast<std::string>(sv)); // Explicitly convert string_view to string using static_cast

    return 0;
}
