#include <iostream>

int g_value1{5};  // global variable with external linkage
int g_value2{10}; // global variable with external linkage

void foo()
{
    std::cout << "global variable value: " << g_value1 << std::endl; // access global variable g_value1
}

int main()
{                  // outer block scope begins here
    int apples{5}; // outer block apples variable declared here

    { // inner block scope begins here

        std::cout << apples << std::endl; // print outer block apples variable here
        int apples{10};                   // inner block apples variable declared here

        std::cout << apples << std::endl; // print inner block apples variable here
    } // inner block scope ends here

    std::cout << apples << std::endl; // print outer block apples variable here

    int g_value1{7}; // local variable with automatic storage duration and no linkage, hides global variable g_value1
    ++g_value1;
    --(::g_value2);                                                    // modify global variable g_value2 using scope resolution operator to access it, since local variable g_value1 hides global variable g_value1
    std::cout << "local variable g_value1: " << g_value1 << std::endl; // print local variable g_value1
    foo();
    std::cout << "local variable g_value1: " << g_value2 << std::endl; // print global variable g_value2

    return 0;
}
