#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v1;
    v1.push_back(10);
    v1.push_back(10);
    std::vector<int> v2;
    v2.push_back(10);
    v2.push_back(10);
    if (v1 == v2)
    {
        std::cout << "Vectors are equal";
    }
    else
    {
        std::cout << "\nVectors are unequal\n";
        v1.swap(v2);
        for (int i = 0; i < v1.size(); i++)
        {
            std::cout << v1[i] << " "<< v2[i] << std::endl;
        }
    }
}