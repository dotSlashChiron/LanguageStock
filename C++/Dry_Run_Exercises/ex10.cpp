#include <iostream>
#include <cmath>
void findPower(double number,int power){
    double finalnum = pow(number,power);
    std::cout<<finalnum<<std::endl;
}
void findPower(int number,int power){
    std::cout<<pow(number,power)<<std::endl;
}
int mainfa(){
    double number;
    int power;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>number;
    std::cout<<"Enter a power to be raised"<<std::endl;
    std::cin>>power;
    findPower(number,power);
    int tpc = int(number);
    findPower(tpc,power);
    return 0;
}