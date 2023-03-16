#include <iostream>
class integer
{
    int m, n;
public:
    integer(){
        m = 0;
        n = 0;
    }; // constructor 1
    integer(int a, int b){
        m = a;
        n = b;
    };
    integer(integer &i){
        m = i.m;
        n = i.n;
    }
};
int amd(){
    integer T1; // calls the first constructor with no parameters
    integer T2(20,40); // calls the second parameterized constructor and sets the value ot 20 and 40 respectively
    integer T3(T2); // calls the third constructor aka copy constructor as it uses a reference variable
    return 0;
}