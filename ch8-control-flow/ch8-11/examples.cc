#include <iostream>

void printMath(int x, int y, char ch)
{
    switch (ch)
    {
    case '+':
        std::cout << x << " + " << y << " = " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " = " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " = " << x * y << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " = " << x / y << '\n';
        break;
    }
}

void sumNum()
{
    int sum{0};
    for (int count{0}; count < 10; ++count)
    {
        std::cout << "Enter a number to add, or 0 to exit: ";
        int num;
        std::cin >> num;
        if (num == 0)
        {
            break;
        }
        sum += num;
    }
    std::cout << "The sum is: " << sum << '\n';
}

void printDivisors()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for (int count{0}; count < 10; ++count)
    {
        if (count % num == 0)
        {
            continue;
        }
        std::cout << count << '\n';
    }
}

int main()
{
    printMath(2, 3, '*');
    sumNum();
    printDivisors();

    return 0;
}
