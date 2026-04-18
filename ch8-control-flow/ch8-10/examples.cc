#include <iostream>

void decrement_loop()
{
    for (int i{9}; i >= 0; --i)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

int main()
{
    decrement_loop();

    return 0;
}
