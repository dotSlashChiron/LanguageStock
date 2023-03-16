#include <iostream>
#include <math.h>
using namespace std;
class Maths{
    float principal;
    double interestRate;
    const int one = 1;
    double amount;
    int years;
    public:
void getSimpleInterest(float &p,double &i,int &y);
void getCompundInterest(float &p,double &rate,int &time);
};
void Maths::getSimpleInterest(float &p,double &i,int &y){
    double a = p*i*y/100;
    cout << "--Simple Interest--" << endl;
    cout <<"Your Interest is " << a << endl;
    cout << "Your Amount is Rs " << a + p << endl;
}
void Maths::getCompundInterest(float &p,double &rate,int &time){
    amount = p*pow((1+rate/100),time);
    cout << "--Compund Interest--" << endl;
    cout << "Your Amount is Rs " << amount << endl;
    cout << "Your Interest is Rs " << amount-p << endl;
}
int mainjaio(){
    float pr;
    double ir;
    int yrs;
    cout << "Principal: "; cin >> pr;
    cout << "Interest Rate: "; cin >> ir;
    cout << "Time(Years): "; cin >> yrs;
    Maths mc;
    // mc.getSimpleInterest(pr,ir,yrs);
    mc.getCompundInterest(pr,ir,yrs);

return 0;
}