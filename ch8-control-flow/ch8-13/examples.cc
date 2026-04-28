#include <iostream>

int plusOne()
{
    static int s_state{3}; // only initialized the first time this function is called

    ++s_state; // first we modify the state
    return s_state;
}

unsigned int g_state{0};

void seedPRNG(unsigned int seed)
{
    g_state = seed;
}

unsigned int LCG16() // PRNG
{
    static unsigned int s_state{0}; // only initialized the first time this function is called

    // Generate the next number

    // We modify the state using large constants and intentional overflow to make it hard
    // for someone to casually determine what the next number in the sequence will be.

    s_state = 8253729 * s_state + 2396403; // first we modify the state

    return s_state % 32768; // then we use the new state to generate the next number in the sequence
}

unsigned int seededLCG16()
{
    g_state = 8253729 * g_state + 2396403; // first we modify the state
    return g_state % 32768;                // then we use the new state to generate the next number in the sequence
}

int main()
{
    std::cout << plusOne() << '\n';
    std::cout << plusOne() << '\n';
    std::cout << plusOne() << '\n';
    std::cout << '\n';

    for (int count{1}; count <= 100; ++count)
    {
        std::cout << LCG16() << '\t';
        if (count % 10 == 0)
        {
            std::cout << '\n';
        }
    }
    std::cout << '\n';

    unsigned int x{};
    std::cout << "Enter a seed value: ";
    std::cin >> x;

    seedPRNG(x); // seed our PRNG
    for (int count{1}; count <= 100; ++count)
    {
        std::cout << seededLCG16() << '\t';
        if (count % 10 == 0)
        {
            std::cout << '\n';
        }
    }
    // test
    return 0;
}
