#include <iostream>

void count()
{
    int count{1};

    while (count <= 10)
    {
        std::cout << count << ' ';
        ++count;
    }
    std::cout << "done!\n";
}

void n_iterations()
{
    int count{1};

    while (count <= 50)
    {
        if (count < 10)
        {
            std::cout << '0';
        }
        std::cout << count << ' ';

        if (count % 10 == 0)
        {
            std::cout << '\n';
        }

        ++count;
    }
}

void printUpto(int outer)
{
    // loop between 1 and outer
    int inner{1};
    while (inner <= outer)
    {
        std::cout << inner << ' ';
        ++inner;
    }
}

int main()
{
    count();
    std::cout << '\n';

    n_iterations();
    std::cout << '\n';

    // outer loops betwee 1 and 5
    int outer{1};
    while (outer <= 5)
    {
        printUpto(outer);
        std::cout << '\n';
        ++outer;
    }
    std::cout << '\n';

    // nested loop
    outer = 1;
    while (outer <= 5)
    {
        int inner{1};
        while (inner <= outer)
        {
            std::cout << inner << ' ';
            ++inner;
        }
        std::cout << '\n';
        ++outer;
    }
    std::cout << '\n';

    return 0;
}
