#include <iostream>
#include <bitset>

void printBits()
{
    std::bitset<8> bits{0b0000'0101};
    std::cout << "Original bits: " << bits << '\n';

    bits.set(3); // Set the 3rd bit (counting from 0)
    std::cout << "After setting the 3rd bit: " << bits << '\n';

    bits.flip(4); // Flip the 4th bit
    std::cout << "After flipping the 4th bit: " << bits << '\n';

    bits.reset(4); // Reset the 4th bit
    std::cout << "After resetting the 4th bit: " << bits << '\n';

    bits.test(2) ? std::cout << "The 2nd bit is set.\n" : std::cout << "The 2nd bit is not set.\n";
}

void setBits()
{
    constexpr char isHungry{0};
    constexpr char isSad{1};
    constexpr char isMad{2};
    constexpr char isHappy{3};
    constexpr char isLaughing{4};
    constexpr char isAsleep{5};
    constexpr char isDead{6};
    constexpr char isCrying{7};

    std::bitset<8> mood{0b0000'0101}; // All bits are initially pattern 0000 0101
    mood.set(isHappy);                // Set the isHappy bit
    mood.flip(isLaughing);            // Flip the isLaughing bit
    mood.reset(isLaughing);           // Reset the isLaughing bit

    std::cout << "Current mood: " << mood << '\n';
    std::cout << "I am happy: " << mood.test(isHappy) << '\n';
    std::cout << "I am laughing: " << mood.test(isLaughing) << '\n';
}

int main()
{
    printBits();
    setBits();

    return 0;
}
