#include <iostream>
using namespace std;

int wildxmain(){
    char *c = new char;
    cout << "Memory Allocation Successful" << endl;
    cout << c << endl;
    delete c;
    cout << c << endl;
    return 0;
}