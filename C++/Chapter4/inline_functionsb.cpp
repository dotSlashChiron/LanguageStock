#include <iostream>
#include <fstream>
using namespace std;
inline float mul(float x, float y){
    return (x*y);
}
inline double div(double x, double y){
    return (x/y);
}
int mainxfas(){
    float a = 12.345;
    float b = 9.82;
    ofstream output;
    output.open("rec.txt");
    output<<"Value of float a is "<<a<<" and float b is "<<b<< endl;
    float mult = mul(a,b);
    float divd = div(a,b);
    output<<"\nValue of float a after func is "<<mult<<" and float b is "<<divd<< endl;
    cout << div(a,b) << endl;
    return 0; 
}