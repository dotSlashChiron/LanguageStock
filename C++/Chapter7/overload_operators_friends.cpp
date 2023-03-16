#include <iostream>
using namespace std;
const int size = 3;
class vector
{
    int v[::size];

public:
    vector();                                 // constructs null vector
    vector(int *x);                           // constructs vector from array
    friend vector operator*(int a, vector b); // friend 1;
    friend vector operator*(vector b, int a); // friend 2;
    friend istream &operator>>(istream &, vector &);
    friend ostream &operator<<(ostream &, vector &);
};
vector::vector()
{
    for (int i = 0; i < ::size; i++)
    {
        v[i] = 0;
    }
}
vector::vector(int *x)
{
    for (int i = 0; i < ::size; i++)
    {
        v[i] = x[i];
    }
}
vector operator*(int a, vector b)
{
    vector c;
    for (int i = 0; i < ::size; i++)
    {
        c.v[i] = a * b.v[i];
    }
    return c;
}
vector operator*(vector b, int a)
{
    vector c;
    for (int i = 0; i < ::size; i++)
        c.v[i] = b.v[i] * a;
    return c;
}
istream &operator>>(istream &din, vector &b)
{
    for (int i = 0; i < ::size; i++)
    {
        din >> b.v[i];
    }
    return (din);
}
ostream &operator<<(ostream &dout, vector &b)
{
    dout << "(" << b.v[0];
    for (int i = 1; i < ::size; i++)
    {
        dout << ", " << b.v[i];
    }
    dout << ") ";
    return (dout);
}
int x[::size] = {2, 4, 6};
int maindhandha()
{
    vector m;
    vector n(x);
    // the above statement is equivalent to
    // vector n;
    // n.v[0] = 2;
    // n.v[1] = 4;
    // n.v[2] = 6;
    std::cout << "Enter elements of vector m " << '\n';
    cin >> m; // invokes operaetor>>() function
    cout << "\n";
    cout << "m = " << m << "\n"; // invokes operator<<() function

    vector p, q;
    p = 2 * m; // invokes friend 1;
    q = n * 2; // invokes friend 2;

    cout << "\n";
    cout << "p = " << p << "\n"; // equivalent to cout<<"p = "<< 2*m<< "\n";
    cout << "q = " << q << "\n"; // equivalent to cout<<"q = "<< n*2<< "\n";
    return 0;
}
