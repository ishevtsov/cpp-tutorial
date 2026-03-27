#include <iostream>

// ld error. myFcn() is ambiguose because it is defined in both a.cc and main.cc
void myFcn(int x)
{
    std::cout << 2 * x;
}

int main()
{
    return 0;
}
