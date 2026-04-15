#include <iostream>

void sayHi();

extern int g_x;
extern const int g_y;

int main()
{
    sayHi();

    std::cout << g_x << ' ' << g_y << std::endl;

    return 0;
}
