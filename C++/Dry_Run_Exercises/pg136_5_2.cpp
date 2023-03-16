#include <iostream>
class B;
class A{
    int x;
    public:
    void setData(int d){
        x = d;
    }
    void display(void){
        printf("%d\n",x);
    }
    friend void add(A &,B);
};
class B{
    int x;
    public:
    void setData(int d){
        x = d;
    }
    void display(void){
        printf("%d\n",x);
    }
    friend void add(A &,B);
};
void add(A &ob_a,B ob_b){
    ob_a.x += ob_b.x;
}
int dicomfymain(){
    A a;
    B b;
    a.setData(10);
    b.setData(20);
    add(a,b);
    a.display();
    b.display();
    return 0;
}