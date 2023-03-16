#include <iostream>
using namespace std;
int swap(int &a,int &b){
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << a <<" "<< b << endl;
    return 1;
}
int spaomain(){
    int a;int b;
    cout << "Give two integers" << endl;
    cout << "Enter integer 1: ";cin >> a;
    cout << "Enter integer 2: ";cin >> b;
    swap(a,b);

return 0;
}