#include <iostream>
#include <string>

void printString(std::string str)
{
    std::cout << str << std::endl;
}

void printSV(std::string_view sv)
{
    std::cout << sv << std::endl;
}

void wrongPrintSV()
{
    std::string_view sv{};         // creates a temporary std::string_view
    {                              // create a new scope
        std::string s{"Hello..."}; // create a std::string in the inner scope
        sv = s;                    // assign the std::string to the std::string_view
    }

    std::cout << "wrongPrintSV(): " << sv << std::endl; // undefined behavior: sv refers to a destroyed std::string
}

std::string getName()
{
    std::string s{"Alice"};
    return s;
}

int main()
{
    std::string s{"Hello, World!"};
    printString(s);

    printSV("Hello, World!"); // cavv C-style string literal
    printSV(s);               // can also pass std::string

    std::string_view sv{s};
    printSV(sv); // can also pass std::string_view

    wrongPrintSV(); // demonstrates the danger of dangling std::string_view

    std::string_view name{getName()};           // also demonstrates the danger of dangling std::string_view
    std::cout << "Name: " << name << std::endl; // undefined behavior

    s = "Hello, a!";                                     // modifying the original string will also affect the std::string_view
    std::cout << "Modified string: " << sv << std::endl; // undefined behavior: sv refers to a modified std::string

    sv = s;                                                  // assigning a new std::string to the std::string_view
    std::cout << "Updated string view: " << sv << std::endl; // now sv refers to the updated string, but it still shares the same underlying data as s
    return 0;
}
