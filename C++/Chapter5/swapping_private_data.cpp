#include <iostream>
class name2; //*Forward Declaration
class name
{
    int data1;
    float data2;

public:
    void setData(int d1)
    {
        data1 = d1;
    }
    void setData(int d1, int d2)
    {
        data1 = d1;
        data2 = d2;
    }
    void displayData(void)
    {
        std::cout << data1 << std::endl;
        // std::cout << data2 << std::endl;
    }
    friend void swapPrivateDataofClasses(name &, name2 &);
};
class name2
{
    int data1;
    float data2;

public:
    void setData(int d1)
    {
        data1 = d1;
    }
    void setData(int d1, int d2)
    {
        data1 = d1;
        data2 = d2;
    }
    void displayData(void)
    {
        std::cout << data1 << std::endl;
        // std::cout << data2 << std::endl;
    }
    friend void swapPrivateDataofClasses(name &, name2 &);
};
void swapPrivateDataofClasses(name &x, name2 &y)
{
    int temp;
    temp = x.data1;
    x.data1 = y.data1;
    y.data1 = temp;
}
int rysmain()
{
    name a;
    name2 b;
    a.setData(10);
    a.displayData();
    b.setData(90);
    b.displayData();
    swapPrivateDataofClasses(a, b); //Swapping Private Data
    std::cout << "After Swapping" << std::endl;
    a.displayData();
    b.displayData();

    return 0;
}