#include <iostream>
#include <algorithm>
#include <functional>
int main()
{
    int x[] = {
        10,
        20,
        30,
        40,
        50,
        60,
        70,
        80};
    int y[] = {
        10, 30, 50, 70};
    if (std::includes(x, x + 8, y, y + 4))
        std::cout << "INCLUDES";
    else
        std::cout << "EXCLUDES";
    return 0;
}