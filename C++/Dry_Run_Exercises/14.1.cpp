#include <iostream>
#include <algorithm>
#include <functional>
int main()
{
    int x[] = {10, 50, 40, 30, 40, 20};
    int y[] = {70, 90, 60, 80};
    std::make_heap(x, x + 5);
    std::make_heap(y, y + 4);
    std::pop_heap(x, x + 5);
    std::pop_heap(y, y + 4);
    for (int i = 0; i < 5; i++)
    {
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << y[i] << " ";
    }
    std::cout << std::endl;
    int z[9];
    std::merge(x,x+5,y,y+4,z);
    for (int i = 0; i < 9; i++)
    {
        std::cout << z[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}