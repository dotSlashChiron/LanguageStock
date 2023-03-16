#include <iostream>
using namespace std;
class BC{
    public:
    int b;
    void show(){
        cout << "b = "<< b << "\n";
    }
};
class DC:public BC{
    public:
    int d;
    void show(){
        cout << "b = " << b << "\n"
        << "d = " << d << "\n";
    }
};
int main(){
    BC *bptr; // base pointer
    BC base; // base class object
    bptr = &base;
    bptr->b = 1000; //access BC via base pointer
    cout << "bptr points to the base object \n";
    bptr->show();

    //derived class
    DC derived; // derived class object
    bptr = &derived; // now bptr(base class pointer) points to address of derived object
    bptr->b = 2000;
    // bptr->d = 3000; won't work
    cout << "bptr now points to derived object \n";
    bptr->show();
    
    // accessing d using a pointer of type derived class DC
    DC *dptr; // derived type pointer
    dptr = &derived;
    dptr->d = 3000;

    cout << "dptr is derived type pointer\n";
    dptr->show();
    cout << "using ((DC *)bptr)\n";
    ((DC *)bptr)->d = 4000;
    ((DC *)bptr)->show();
    return 0;
}