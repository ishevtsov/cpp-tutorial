#include <string>
#include <iostream>

void name()
{
    std::string name{"Alex"}; // name is a modifiable string object
    name = "John";            // we can modify the contents of the string
    std::cout << "Name: " << name << std::endl;
}

void intro_wrong()
{
    std::cout << "Enter your full name: ";
    std::string fullName{};
    std::cin >> fullName;

    std::cout << "Enter your favourite colour: ";
    std::string favouriteColour{};
    std::cin >> favouriteColour;

    std::cout << "Hello, " << fullName << "! Your favourite colour is " << favouriteColour << "." << std::endl;
}

void intro_right()
{
    std::cout << "Enter your full name: ";
    std::string fullName{};
    std::getline(std::cin >> std::ws, fullName); // Use getline to read the full name including spaces

    std::cout << "Enter your favourite colour: ";
    std::string favouriteColour{};
    std::getline(std::cin >> std::ws, favouriteColour); // Use getline to read the favourite colour

    std::cout << "Hello, " << fullName << "! Your favourite colour is " << favouriteColour << "." << std::endl;
}

void choices()
{
    std::cout << "Pick 1 or 2: ";
    int choices{};
    std::cin >> choices;

    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << "! You picked choice " << choices << '\n';
}

void string_length()
{
    std::string name{"Alex"};
    std::cout << name << " has " << name.length() << " characters.\n";
    int length{static_cast<int>(name.length())}; // Convert size_t to int
    std::cout << "Length as int: " << length << std::endl;
}

void string_literal()
{
    using namespace std::string_literals; // Enable string literals

    std::cout << "foo\n";  //  no suffix is a C-style string literal
    std::cout << "bar\n"s; //  suffix is a C++ string literal
}

int main()
{
    // name();
    // intro_wrong();
    // intro_right();
    // choices();
    string_length();
    string_literal();

    return 0;
}
