#include <iostream>
using namespace std;
template <class T1=int, class T2=float>
class Test{
    T1 a;
    T2 b;
    public:
    Test(T1 x, T2 y){
        a = x;
        b = y;
    }
    void show(){
        cout << a << " and " << b << endl;
    }
};
int main(){
    Test <float,int> test1(1.3,23.23);
    Test <float> test2(9.9,23.34);
    test1.show();
    test2.show();
    return 0;

}