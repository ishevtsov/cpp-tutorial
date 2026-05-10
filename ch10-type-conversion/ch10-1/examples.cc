#include <iostream>
#include <cstring>

int main()
{
    int n{3};
    float f{};
    std::memcpy(&f, &n, sizeof(float)); // copy the bytes of n into f
    std::cout << f << '\n';             // prints a seemingly random number, not 3.0

    return 0;
}
