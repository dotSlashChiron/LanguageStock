#include <iostream>
#include <cmath>
int main(){
    std::cout.fill('*');
    std::cout.setf(std::ios::left,std::ios::adjustfield);
    std::cout.width(10);
    std::cout << "VALUE: ";
    std::cout.setf(std::ios::right,std::ios::adjustfield);
    std::cout.width(15);
    std::cout << "SQRT OF VALUE" << "\n";

    std::cout.fill('.');
    std::cout.precision(4);
    std::cout.setf(std::ios::showpoint);
    std::cout.setf(std::ios::showpos);
    std::cout.setf(std::ios::fixed,std::ios::floatfield);
    for(int n=1;n<=10;n++){
        std::cout.setf(std::ios::internal,std::ios::adjustfield); // gives the + sign at beginning
        std::cout.width(5);
        std::cout << n;
        std::cout.setf(std::ios::right,std::ios::adjustfield);
        std::cout.width(20);
        std::cout << sqrt(n) << "\n";
    }
    // floatfield changed
    std::cout.setf(std::ios::scientific,std::ios::floatfield);
    std::cout << "\nSQRT(100) = " << sqrt(100) << "\n";
    return 0;
}