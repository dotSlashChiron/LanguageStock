#include <iostream>
const int size = 3;
template <class T>
class vector
{
public:
    T *v;
    vector()
    {
        v = new T[size];
        for (int i = 0; i < size; i++)
        {
            v[i] = 0;
        }
    }
    vector(T *a)
    {
        v = new T[size];
        for (int i = 0; i < size; i++)
        {
            v[i] = a[i];
        }
    }
    T operator*(vector &y)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->v[i] * y.v[i];
        }
        return sum;
    }
    void display(void)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << v[i] << "\t";
        }
        std::cout << "\n";
    }
};
int main()
{
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};
    vector<int> v1(a);
    vector<int> v2(b);
    v1.display();
    v2.display();
    std::cout << "v1 * v2 = " << v1 * v2 << "\n";
    return 0;
}