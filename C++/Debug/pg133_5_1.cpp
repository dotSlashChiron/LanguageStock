#include <iostream>
class addition
{
    int p, q, r, s;

public:
    void input(void)
    {
        std::cout << "Enter the three numbers \n";
        std::cin >> p >> q >> r;
    }
    friend void add(addition a);
};
void add(addition a)
{
    a.s = a.p + a.q + a.r;
    std::cout << "The sum of the three numbers is " << a.s << std::endl;
}
int Sabkimain()
{
    addition x;
    x.input();
    add(x);
    return 0;
}