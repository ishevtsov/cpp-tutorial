#include <iostream>

int initX();
int initY();

int g_x{initX()}; // g_x initialized first
int g_y{initY()};

int initX()
{
    return g_y; // g_y isn't initialized when this is called
}

int initY()
{
    return 5;
}

int main()
{
    std::cout << g_x << ' ' << g_y << '\n';
    return 0;
}
