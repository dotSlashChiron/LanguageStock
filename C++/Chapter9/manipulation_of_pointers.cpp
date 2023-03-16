#include <iostream>
using namespace std;
int ekmain(){
    int a = 30;
    int *ptr;
    ptr = &a;
    cout << "Value of a is: " << *ptr << "\n";
    *ptr = *ptr+a;
    cout << "\nThe revised value of a is: " << a;
    return 0;
}
