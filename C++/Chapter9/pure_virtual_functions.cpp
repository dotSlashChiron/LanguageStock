#include <iostream>
using namespace std;
class Balagurusamy{
    public:
    virtual void example()=0; // denotee pure virtual function definition
};
class C:public Balagurusamy{
    public:
    void example(){
        cout << "C Text Book Written by Balagurusamy";
    }
};
class oops:public Balagurusamy // derived class 2
{
    void example(){
        cout << "C++ textbook written by Balagurusamy";
    }    
};
int main(){
    Balagurusamy *arra[2];
    C e1;
    oops e2;
    arra[0] = &e1;
    arra[1] = &e2;
    arra[0]->example();
    arra[1]->example();
return 0;
}