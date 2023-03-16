#include <iostream>
using namespace std;
class B{
    int a; // private: not inheritable
    public:
    int b;
    void get_ab(){
        cout<<"Enter values for a and b (space separated): ";
        std::cin>>a>>b;
    }
    int get_a(void){
        return a;
    }
    void show_a(void){
        cout <<"a = " << a <<std::endl;
    }
};
class D:private B{
    int c;
    public:
    void mul(void){
        get_ab();
        c = b*get_a();
    }
    void display(void){
        show_a();
        cout <<"b = "<< b <<"\n"
             <<"c = " <<c << "\n\n";
    }
};
int iomain(int argc, char const *argv[])
{
    D d;
    // d.get_ab(); //!WON'T WORK
    // d.show_a(); //!WON'T WORK
    // d.b = 20; //!WON'T WORK: b is private
    d.mul();
    d.display();
    d.mul();
    d.display();
    return 0;
}
