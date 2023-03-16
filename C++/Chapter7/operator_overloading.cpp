#include <iostream>
#include <vector>
using namespace std;
class space{
    int x;
    int y;
    int z;
    public:
    void getData(int a,int b,int c);
    void display(void);
    void operator-() ; //overload uniary minus
};
void space::getData(int a,int b,int c){
    x = a;
    y = b;
    z = c;
}
void space::display(void){
    cout<<"X = "<<x<<" ";
    cout<<"Y = "<<y<<" ";
    cout<<"Z = "<<z<<"\n";
}
void space::operator-(){
    x = -x;
    y = -y;
    z = -z;
}
int mainJalne(){
    space S;
    S.getData(10,-20,30);
    std::cout<<"S : ";
    S.display();

    -S;
    std::cout<<"-S : ";
    S.display();
}