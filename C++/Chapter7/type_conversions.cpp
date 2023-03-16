#include <iostream>
class name
{
    int data1;
    float data2;

public:
    void setData(int d1, int d2)
    {
        data1 = d1;
        data2 = d2;
    }
    void displayData(void)
    {
        std::cout << data1 << std::endl;
        std::cout << data2 << std::endl;
    }
};
int mainfaf()
{   
    int m;
    std::cout<<"Type before coercion -> " << typeid(m).name() << std::endl;
    float x = 3.14159;
    m = x;
    std::cout<<"Type after coercion -> " << typeid(m).name() << std::endl;
    return 0;
}