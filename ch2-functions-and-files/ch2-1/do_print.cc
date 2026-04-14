#include <iostream>

void doPrint()
{
    std::cout << "Inside doPrint()\n";
}

int main()
{
    std::cout << "Starting main()\n";
    doPrint();
    std::cout << "Ending main()\n";

    return 0;
}
