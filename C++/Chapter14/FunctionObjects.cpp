#include <iostream>
#include <algorithm>
#include <functional>
int main()
{
    int x[] = {10, 50, 30, 40, 20};
    int y[] = {70, 90, 60, 80};
    std::sort(x, x + 5, std::greater<int>());
    std::sort(y, y + 4);
    for (int i = 0; i < 5; i++)
    {
        std::cout << x[i] << " ";
    }
    std::cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << y[i] << " ";
    }
    std::cout << "\n";
    int z[9];
    std::merge(x, x + 5, y, y + 4, z);
    for (int i = 0; i < 9; i++)
    {
        std::cout << z[i] << " ";
    }
    std::cout << "\n";
    return 0;
}