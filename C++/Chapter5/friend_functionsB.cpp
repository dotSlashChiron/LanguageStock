#include <iostream>
class XYZ;
class ABC;
class ABC
{
    int data;
public:
    void setValue(int value) {
        data = value;
    }
    friend void add(ABC,XYZ); //Friend function declaration
};
class XYZ{
    int data;
    public:
    void setValue(int value) {
        data = value;
    }
    friend void add(ABC,XYZ); //Friend function declaration
};
void add(ABC d1,XYZ d2) {
    std::cout << "The sum of ABC and XYZ is " << d1.data+d2.data << std::endl;
}
int maincxx(){
    ABC a1;
    XYZ a2;
    a1.setValue(23);
    a2.setValue(20);
    add(a1,a2);

    return 0;
}