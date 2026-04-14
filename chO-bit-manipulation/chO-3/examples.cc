#include <cstdint>
#include <iostream>
#include <bitset>

constexpr std::uint8_t mask0{1 << 0}; // represents bit 0
constexpr std::uint8_t mask1{1 << 1}; // represents bit 1
constexpr std::uint8_t mask2{1 << 2}; // represents bit 2
constexpr std::uint8_t mask3{1 << 3}; // represents bit 3
constexpr std::uint8_t mask4{1 << 4}; // represents bit 4
constexpr std::uint8_t mask5{1 << 5}; // represents bit 5
constexpr std::uint8_t mask6{1 << 6}; // represents bit 6
constexpr std::uint8_t mask7{1 << 7}; // represents bit 7

void test_bit()
{
    // Use bitwise AND to check if a specific bit is set
    std::uint8_t flags{0b0000'0101}; // 8 bits, room for 8 flags

    std::cout << "bit 0 is " << (static_cast<bool>(flags & mask0) ? "on\n" : "off\n"); // true, because bit 0 is set
    std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n"); // false, because bit 1 is not set
    std::cout << "---" << std::endl;
}

void set_bit()
{
    // Use bitwise OR to set a specific bit
    std::uint8_t flags{0b0000'0101}; // 8 bits, room for 8 flags

    std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n"); // false, because bit 1 is not set

    flags |= mask1; // set bit 1 using bitwise OR

    std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n"); // true, because bit 1 is now set

    flags |= (mask4 | mask5); // set bits 4 and 5 using bitwise OR

    std::cout << "bit 4 is " << (static_cast<bool>(flags & mask4) ? "on\n" : "off\n"); // true, because bit 4 is now set
    std::cout << "bit 5 is " << (static_cast<bool>(flags & mask5) ? "on\n" : "off\n"); // true, because bit 5 is now set

    std::cout << "---" << std::endl;
}

void clear_bit()
{
    // Use bitwise AND with NOT to clear a specific bit
    std::uint8_t flags{0b0000'0101}; // 8 bits, room for 8 flags

    std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n"); // true, because bit 2 is set

    flags &= ~mask2; // clear bit 2 using bitwise AND with NOT

    std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n"); // false, because bit 2 is now cleared

    flags &= ~(mask4 | mask5); // clear bits 4 and 5 using bitwise AND with NOT

    std::cout << "bit 4 is " << (static_cast<bool>(flags & mask4) ? "on\n" : "off\n"); // false, because bit 4 is now cleared
    std::cout << "bit 5 is " << (static_cast<bool>(flags & mask5) ? "on\n" : "off\n"); // false, because bit 5 is now cleared

    std::cout << "---" << std::endl;
}

void flip_bit()
{
    // Use bitwise XOR to flip a specific bit
    std::uint8_t flags{0b0000'0101}; // 8 bits, room for 8 flags

    std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n"); // true, because bit 2 is set

    flags ^= mask2; // flip bit 2 using bitwise XOR

    std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n"); // false, because bit 2       is now flipped

    flags ^= (mask1 | mask4); // flip bits 1 and 4 using bitwise XOR

    std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n"); // true, because bit 1 is now flipped
    std::cout << "bit 4 is " << (static_cast<bool>(flags & mask4) ? "on\n" : "off\n"); // true, because bit 4 is now flipped

    std::cout << "---" << std::endl;
}

void masks_and_bitset()
{
    constexpr std::uint8_t mask0{1 << 0}; // represents bit 0
    constexpr std::uint8_t mask1{1 << 1}; // represents bit 1
    constexpr std::uint8_t mask2{1 << 2}; // represents bit 2
    constexpr std::uint8_t mask3{1 << 3}; // represents bit 3
    constexpr std::uint8_t mask4{1 << 4}; // represents bit 4
    constexpr std::uint8_t mask5{1 << 5}; // represents bit 5
    constexpr std::uint8_t mask6{1 << 6}; // represents bit 6
    constexpr std::uint8_t mask7{1 << 7}; // represents bit 7

    std::bitset<8> flags{0b0000'0101};
    std::cout << "bit 1 is " << (flags.test(1) ? "on\n" : "off\n"); // false, because bit 1 is not set
    std::cout << "bit 2 is " << (flags.test(2) ? "on\n" : "off\n"); // true, because bit 2 is set

    flags ^= (mask1 | mask2);                                       // flip bits 1 and 2 using bitwise XOR
    std::cout << "bit 1 is " << (flags.test(1) ? "on\n" : "off\n"); // true, because bit 1 is now flipped
    std::cout << "bit 2 is " << (flags.test(2) ? "on\n" : "off\n"); // false, because bit 2 is now flipped

    flags |= (mask1 | mask2);                                       // set bits 1 and 2 using bitwise OR
    std::cout << "bit 1 is " << (flags.test(1) ? "on\n" : "off\n"); // true, because bit 1 is now set
    std::cout << "bit 2 is " << (flags.test(2) ? "on\n" : "off\n"); // true, because bit 2 is now set

    flags &= ~(mask1 | mask2);                                      // clear bits 1 and 2 using bitwise AND with NOT
    std::cout << "bit 1 is " << (flags.test(1) ? "on\n" : "off\n"); // false, because bit 1 is now cleared
    std::cout << "bit 2 is " << (flags.test(2) ? "on\n" : "off\n"); // false, because bit 2 is now cleared

    std::cout << "---" << std::endl;
}

void masks_meaningful()
{
    constexpr std::uint8_t isHungry{1 << 0};   // 0000 0001
    constexpr std::uint8_t isSad{1 << 1};      // 0000 0010
    constexpr std::uint8_t isMad{1 << 2};      // 0000 0100
    constexpr std::uint8_t isHappy{1 << 3};    // 0000 1000
    constexpr std::uint8_t isLaughing{1 << 4}; // 0001 0000
    constexpr std::uint8_t isAsleep{1 << 5};   // 0010 0000
    constexpr std::uint8_t isDead{1 << 6};     // 0100 0000
    constexpr std::uint8_t isCrying{1 << 7};   // 1000 0000

    std::uint8_t mood{};            // All bits are initially turned off (0000 0000)
    mood |= (isHappy | isLaughing); // Set the isHappy and isLaughing bits
    mood &= ~isLaughing;            // Clear the isLaughing bit

    std::cout << std::boolalpha;                                                    // Print bool values as true/false instead of 1/0
    std::cout << "Am I happy? " << static_cast<bool>(mood & isHappy) << '\n';       // true, because the isHappy bit is set
    std::cout << "Am I laughing? " << static_cast<bool>(mood & isLaughing) << '\n'; // false, because the isLaughing bit is cleared
    std::cout << "---" << std::endl;
}

int main()
{
    test_bit();
    set_bit();
    clear_bit();
    flip_bit();
    masks_and_bitset();
    masks_meaningful();

    return 0;
}
