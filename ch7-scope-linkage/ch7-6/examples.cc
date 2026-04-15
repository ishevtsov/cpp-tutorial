#include <iostream>

static int g_x{}; // global variable with internal linkage

const int g_y{1};     // global variable with internal linkage, since const variables have internal linkage by default
constexpr int g_z{2}; // global variable with internal linkage, since constexpr variables have internal linkage by default

static int g_f{3}; // this internal g_f is only accessible within this translation unit, which is a.cc, and it hides the global variable g_f with internal linkage from a.cc, so it is accessed using scope resolution operator to access the global variable g_f with internal linkage from a.cc

int add(int x, int y); // declaration of add() function with external linkage, which is defined in a.cc, and it is accessible here

int main()
{
    std::cout << g_x << ' ' << g_y << ' ' << g_z << std::endl; // print global variables g_x, g_y, and g_z from main.cc, which have internal linkage and are accessible here
    std::cout << g_f << std::endl;                             // uses main.ccs g_x, prints 3

    std::cout << add(4, 5) << std::endl; // This program won’t link, because function add is not accessible outside of add.cc

    return 0;
}
