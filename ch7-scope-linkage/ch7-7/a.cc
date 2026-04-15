#include <iostream>

void sayHi()
{
    std::cout << "Hi\n";
}

int g_x{2}; // non-constant globals are external by default (no need to use extern)

extern const int g_y{3};     // const globals can be defined as extern, making them external
extern constexpr int g_z{3}; // constexpr globals can be defined as extern, making them external (but this is pretty
