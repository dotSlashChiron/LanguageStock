#include <iostream>
using namespace std;
int p;
const int &display();
int bajarmain(){
    display();
    cout << p;
    return 0;
}
const int &display(){
    return 2;
}