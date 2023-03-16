#include <iostream>
using namespace std;
int wwmain(){
    int a,*ptr1,**ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    cout << "Address of a: " << ptr1 << "\n";
    cout << "Address of ptr1 " << ptr2 << "\n";
    cout << "After incrementing the address values:\n";
    ptr1+=2;
    cout << "Address of a: " << ptr1 << "\n";
    ptr2+=2;
    cout << "Address of ptr1: " << ptr2 << "\n";
}