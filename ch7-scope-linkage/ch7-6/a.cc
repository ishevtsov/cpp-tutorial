constexpr int g_f{2}; // this internal g_f is only accessible within a.cc

static int add(int x, int y) // this internal add() function is only accessible within a.cc
{
    return x + y;
}
