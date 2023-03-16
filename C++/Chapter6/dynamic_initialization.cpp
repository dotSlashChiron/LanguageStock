#include <iostream>
class Fixed_deposit{
    long int P_amount;  // principal amount
    int Years;  // Period of Investment
    float Rate; // Interest rate
    float R_value; // return value of amount
    public:
    Fixed_deposit(){};
    Fixed_deposit(long int p,int y,float r=0.12);
    Fixed_deposit(long int p,int y,int r);
    void display(void);
};
Fixed_deposit::Fixed_deposit(long int p,int y,float r){
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for(int i=1;i<=y;i++){
        R_value = R_value*(1.0+r);
    }
}
Fixed_deposit::Fixed_deposit(long int p,int y,int r){
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for(int i= 1; i<=y;i++){
        R_value = R_value*(1.0+float(r)/100);
    }
}
void Fixed_deposit::display(void){
    std::cout<<"\n"
    << "Principal Amount = " <<P_amount <<"\n"
    << "Return Value = " << R_value << "\n";
}
int mainfafax(){
    Fixed_deposit FD1, FD2, FD3; // deposit created
    long int p; // princiapl amount
    int y; // Investment period, years;
    int r; // intereset rate, decimal form
    int R; //interest rate, percent form

    std::cout<<"Enter amount, period, interest rate(in percent)" <<"\n";
    std::cin>>p >> y>> R;
    FD1 = Fixed_deposit(p,y,R);

    std::cout<<"Enter amount, period, interest rate(decimal form)" <<"\n";
    std::cin>>p >> y>> r;
    FD2 = Fixed_deposit(p,y,r);

    std::cout<<"Enter amount and period" << "\n";
    std::cin>>p>>y;
    FD3 = Fixed_deposit(p,y);

    std::cout<<"\nDeposit 1";
    FD1.display();

    std::cout<<"\nDeposit 2";
    FD2.display();

    std::cout<<"\nDeposit 3";
    FD3.display();
    return 0;
}