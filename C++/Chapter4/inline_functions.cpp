#include <iostream>
using namespace std;
inline int sum(int a, int b) { 
    return a+b;
}
int mainxx(){
    int a = 3;
    int b = 9;
    int sumer = sum(a,b);
    cout << sumer << endl;
    return 0;
}

/*
1. An inline function is a function that is expanded in line when it is invoked.
2. In general making a function inline reduces the process time by using CPU Specs.
3. Only small functions are supposed to be inline otherwise the compiler may ignore the big inline functions.
4. Like the functions which are meant to return values are defined to be inline
inline double cube(double x, double y){
    return (x * y);
}





*/