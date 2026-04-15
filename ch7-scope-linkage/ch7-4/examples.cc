#include <iostream>

int g_x{}; // global variable with external linkage

namespace Foo
{
    int g_x{}; // global variable with external linkage, but in namespace Foo
}

void doSomething()
{
    g_x = 3; // local variable with automatic storage duration and no linkage
    std::cout << g_x << std::endl;

    Foo::g_x = 4;
    std::cout << Foo::g_x << std::endl;
}

int main()
{
    doSomething();
    std::cout << g_x << std::endl; // g_x is accessible here because it has external linkage

    g_x = 5;
    std::cout << g_x << std::endl; // g_x is accessible here because it has external linkage

    Foo::g_x = 6;
    std::cout << Foo::g_x << std::endl; // g_x in namespace Foo is accessible here because it has external linkage

    return 0;
}
