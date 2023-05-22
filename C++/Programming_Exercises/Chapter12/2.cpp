#include <iostream>
#include <vector>
#define ARR_LIMIT 5
template <class V = int>
class VecTack
{
    std::vector<int> v1;

public:
    VecTack(V *arr)
    {
        for (int i = 0; i < ARR_LIMIT; i++)
        {
            v1.push_back(arr[i]);
        }
    };
    void PrintVec()
    {
        std::cout << "(";
        for (V i = 0; i < ARR_LIMIT; i++)
        {
            std::cout << v1.at(i) << ",";
        }
        std::cout << ")";
    };
    void MultiplyVec(V num = 0)
    {
        if (this->v1.empty())
        {
            std::cout << "Warning: The vector is empty."
                      << std::endl;
        }
        else
        {
            std::cout << "Vector before multiplying: ";
            this->PrintVec();
            for (V i = 0; i < ARR_LIMIT; i++)
            {
                this->v1.at(i) = this->v1.at(i) * num;
            }
            std::cout << std::endl;
            std::cout << "Vector after multiplying: ";
            this->PrintVec();
        }
    }
    V LinearSearch(V term)
    {
        for (V i = 0; i < ARR_LIMIT; i++)
        {
            if(this->v1.at(i)==term){
                return i;
            }
        }
    }
};
int main()
{
    int arr[ARR_LIMIT] = {1, 2, 3, 4, 5};
    VecTack<int> a(arr);
    a.MultiplyVec(9);
    std::cout << "\nThe term 27 was found at index '" << a.LinearSearch(27)+1 << "'" <<std::endl;
    return (0);
}