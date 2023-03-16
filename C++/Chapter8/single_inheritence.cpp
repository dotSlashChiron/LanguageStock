#include <iostream>
using namespace std;
class B
{
    int a; // private: not inheritable
public:
    int b; // public: ready for inheritence
    void set_ab(void)
    {
        a = 5;
        b = 10;
    }
    int get_a(void)
    {
        return a;
    }
    void show_a(void)
    {
        cout << "a = " << a << std::endl;
    }
};
class D : public B
{ //public derivation
    int c;

public:
    void mul(void)
    {
        c = b * get_a();
    };
    void display(void)
    {
        cout << "a = " << get_a() << "\n";
        cout << "b = " << b << std::endl;
        cout << "c = " << c << std::endl;
    };
};
int saomain(int argc, char const *argv[])
{
    D d;
    d.set_ab();
    d.mul();
    d.show_a();
    std::cout << "\n";
    d.display();
    d.b = 20;
    d.mul();
    std::cout << "\n";
    d.display();
    return 0;
}
