#include <iostream>
using namespace std;
class alpha
{
    int x;

public:
    alpha(int i)
    {
        this->x = i;
        cout << "Alpha initialized \n";
    }
    void show_alpha(void)
    {
        cout << "this->x = " << this->x << "\n";
    }
};
class beta
{
    float y;

public:
    float p,q ;
    beta(float a,float b):p(a),q(b+p)
    {
        cout << "beta initialized \n";
    }
    void show_beta(void)
    {
        cout << "this->p = " << this->p << "\n";
        cout << "this->q = " << this->q << "\n";
    }
};
class gamma : public beta, public alpha
{
    int u,v;

public:
   gamma(int a,int b,float c):
   alpha(a*2), beta(c,c),u(a),v(b){
       cout << "gamma constructed \n";
   }
    void show_gamma(void)
    {
        cout << "this->u = " << this->u << "\n"
             << "this->v = " << this->v << "\n";
    }
};
int tharamain()
{
   gamma g(2,4,2.5);
   cout << "\n\n Display Member Values \n\n";
   g.show_alpha();
   g.show_beta();
   g.show_gamma();
    return 0;
}
