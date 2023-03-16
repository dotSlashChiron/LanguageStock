#include <iostream>
#include <cmath>
using namespace std;
float amount (double &principal,int &period,float rate = 0.15){
    double returnvalue = principal*pow((1+rate/100),period);
    return returnvalue;
}
int maindfa(){
    double principal = 1000;
    int period = 2;
    double returnvalue = amount(principal,period); // One arguement is missing in the parameters because it using the default parameter
    double amount1 = amount(principal,period,2.20); /// No arguement is missing in the parameters
    cout <<"Printing Amount " << amount1 << endl;
    cout << returnvalue << endl;
    
    return 0;
}
/*
Default arguements in the function are supposed to be define in the end of the argument list
int mul(double x, double y,double z = 23); // Legal Arguments
int mul(double x, double y =23, double z) // Illegal arguments


*/