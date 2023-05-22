#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int U[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int X[] = {10, 30, 50, 70, 90};
    std::vector<int> VZ(10);
    std::vector<int>::iterator itr;
    itr = std::set_difference(U, U + 10, X, X + 5, VZ.begin());
    VZ.resize(itr - VZ.begin());
    for (int i = 0; i < VZ.size(); i++)
        std::cout << VZ[i] << " ";
    return (0);
}