#include <iostream>
using namespace std;

enum chars{
    X,Y,Z
};
// const int X = 10; -Error in C++ Enums value can't be modified outside the enum
// const int Y = 23; -Error in C++ Enums value can't be modified outside the enum
// const int Z = 83; -Error in C++ Enums value can't be modified outside the enum
int mainaa(){
    cout << "The value of x " << X << endl;
    cout << "The value of Y " << Y << endl;
    cout << "The value of Z " << Z << endl;

return 0;
}