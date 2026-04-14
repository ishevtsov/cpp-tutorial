#include <iostream>
#include <bitset>

void shift_example()
{
    std::bitset<4> x{0b1100}; // 12 in decimal
    std::cout << "Original bits: " << x << '\n';

    std::cout << (x >> 1) << " (x >> 1) - Right shift by 1\n"; // Should be 6 (0b0110)
    std::cout << (x << 1) << " (x << 1) - Left shift by 1\n";  // Should be 24 (0b11000, but only the lower 4 bits are kept, so it becomes 0b1000 which is
    std::cout << "----------------------------------\n";
}

void bitNOT_example()
{
    std::bitset<4> b4{0b100}; // b4 is 0100 in binary, which is 4 in decimal
    std::bitset<8> b8{0b100}; // b8 is 0000 0100 in binary, which is also 4 in decimal

    std::cout << "Initial values:\n";
    std::cout << "Bits: " << b4 << ' ' << b8 << '\n';
    std::cout << "Values: " << b4.to_ulong() << ' ' << b8.to_ulong() << '\n';

    b4 = ~b4; // Applying bitwise NOT to b4
    b8 = ~b8; // Applying bitwise NOT to b8

    std::cout << "Applying bitwise NOT (~):\n";
    std::cout << "Bits: " << b4 << ' ' << b8 << '\n';
    std::cout << "Values: " << b4.to_ulong() << ' ' << b8.to_ulong() << '\n';
    std::cout << "----------------------------------\n";
}

void bitOR_example()
{
    std::cout << (std::bitset<4>{0b0101} | std::bitset<4>{0b0110}) << " (0b0101 | 0b0110) - Bitwise OR\n"; // Should be 0b0111
    std::cout << "----------------------------------\n";
}

void bitAND_example()
{
    std::cout << (std::bitset<4>{0b0101} & std::bitset<4>{0b0110}) << " (0b0101 & 0b0110) - Bitwise AND\n"; // Should be 0b0100
    std::cout << "----------------------------------\n";
}

void bitXOR_example()
{
    std::cout << (std::bitset<4>{0b0101} ^ std::bitset<4>{0b0110}) << " (0b0101 ^ 0b0110) - Bitwise XOR\n"; // Should be 0b0011
    std::cout << "----------------------------------\n";
}

int main()
{
    shift_example();
    bitNOT_example();
    bitOR_example();
    bitAND_example();
    bitXOR_example();

    return 0;
}
