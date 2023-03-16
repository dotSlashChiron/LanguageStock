#include <iostream>
class A{
    int x;
    A *p;
    public:
    void setData(int d, A *pb){
        x = d;
        p = pb;
    }
    void display(){
        std::cout<<x<<" "<<(*p).x<<std::endl;
    }
};
int famain(){
    A a,b;
    a.setData(10,&b);
    b.setData(20,&a);
    a.display();
    b.display();
    return 0;
}
//* Prints the value of a and b with respect to their values in the memory as function parameters