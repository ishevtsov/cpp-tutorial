#include "Alex.h" // copies #define MY_NAME from Alex.h here
#include <iostream>

#define PRINT_JOE

int main()
{
    std::cout << MY_NAME << std::endl;

#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifndef PRINT_BOB
    std::cout << "Bob\n"; // will be compiled since PRINT_BOB is not defined
#endif

    return 0;
}
