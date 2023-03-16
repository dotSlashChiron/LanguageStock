#include <iostream>
using namespace std;

int mainaaa()
{
    float x; //Declaration
    float sum = 0;
    int i;
    for (i = 1; i < 5; i++)
    { //Declaration
        cin >> x;
        sum = sum + x;
    }
    float average;
    average = sum / (i - 1);
    cout << average;

    return 0;
}
/*
Declaration of variable in C++ can be done anywhere unlike C all variables must be declared before they are used in executable statements
-> Makes the program much easier to write and reduces the scope of errors
*/