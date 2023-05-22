#include <iostream>
#define ARR_LIMIT 5
template <class T = int>
class Array
{
private:
    int x[ARR_LIMIT];

public:
    Array(T *arr)
    {
        for (T i = 0; i < ARR_LIMIT; i++)
        {
            x[i] = arr[i];
        }
    }
    T FindMin()
    {
        int min = x[0];
        for (T i = 0; i < ARR_LIMIT; i++)
        {
            if (x[i] < min)
            {
                min = x[i];
            }
        }
        return min;
    }
    T FindMax()
    {
        int max = x[0];
        for (T i = 0; i < ARR_LIMIT; i++)
        {
            if (x[i] > max)
            {
                max = x[i];
            }
        }
        return max;
    }
};

int main()
{
    int arr[5] = {-1, 22, 5, -9, 3};
    // Instantiating the Array Class with A1 object
    Array<int> a1(arr);
    std::cout << a1.FindMin() << std::endl;
    std::cout << a1.FindMax() << std::endl;
    return 0;
}
