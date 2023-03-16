#include <iostream>
using namespace std;
class Base{
    public:
    void display(){cout << "\nDisplay Base ";}
    virtual void show(){
        cout << "\nShow base";
    }
};
class Derived: public Base{
    public:
    void display(){cout << "\nDisplay Derived ";}
    void show(){
        cout << "\nShow derived";
    }
};
int main(){
    Base B;
    Derived D;
    Base *bptr;
    cout << "\nbptr points to the base\n";
    bptr = &B;
    bptr->display(); // calls base function
    bptr->show(); // calls base function
    cout << "\n\nbptr points to Derived\n";
    bptr = &D;
    bptr->display(); //calls base version
    bptr->show(); //calls derived version
}