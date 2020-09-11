#include <iostream>

namespace
{
    int doubleNumber(const int a)
    {
        goto g;
    g:
        return a + a;
    }
} // namespace

int main(int, char **)
{
    std::cout << "2 doubled is " << doubleNumber(2) << "!\n";
}
