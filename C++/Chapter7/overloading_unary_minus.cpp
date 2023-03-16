#include <iostream>
using namespace std;
class complex
{
    float x;
    float y;

public:
    complex(){};
    complex(float real, float imag)
    {
        x = real;
        y = imag;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.x = x+ c.x;
        temp.y = y+ c.y;
        return (temp);
    }
    void display(void)
    {
        std::cout << x << " +j" << y << "\n";
    }
};
int maindfa()
{
    complex c1, c2, c3;     //created 3 objects of class complex
    c1 = complex(2.5, 3.5); //assigned values to c1
    c2 = complex(1.6, 2.7); //assigned values to c2
    c3 = c1 + c2;           // invoked operator overloading
    // the above statement is equivalent to
    // c3 = c1.operator+(c2); 
    
    std::cout << "C1 = "; c1.display();
    std::cout << "C2 = "; c2.display();
    std::cout << "C3 = "; c3.display();

}