#include <iostream>
using namespace std;
template <class T>
void swap(T *x,T *y){
    T temp = x;
    x = y;
    y = temp;
}
void fun(int m,int n,float a,float b){
    cout << "m and n before swap: " << m << " " << n << endl;
    swap(m,n);
    cout << "m and after swap: "<< m << " " << n << endl;

    cout << "a and b before swap: " << a << " " << b << endl;
    swap(a,b);
    cout << "a and b after swap: "<< a << " " << b << endl;

}
int main(){
    fun(100,200,2.14,3.14);
    return 0;
}