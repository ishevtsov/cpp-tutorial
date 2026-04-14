#include "square.h"
#include "wave.h"
#include <iostream>

int main()
{
    std::cout << "A square has " << getSquareSides() << " sides.\n";
    std::cout << "The square with side length 5 has a perimeter of " << getSquarePerimeter(5) << ".\n";
    return 0;
}
