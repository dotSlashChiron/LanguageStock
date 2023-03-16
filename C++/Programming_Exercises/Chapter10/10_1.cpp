#include <iostream>
#include <iomanip>
int main(){
    std::string books[5] = {
        "Turbo C++",
        "C Primer",
        "C++ OOPS",
        "C Manips",
        "C++ STL"
    };
    int code[5] = {
    1001,
    905,
    676,
    392,
    231};
    double cost[5] = {
        250.95, 
        95.70, 
        230.22,
        120.22,
        90.99
    }; std::setfill('*');
    std::cout << std::setw(10) << std::setiosflags(std::ios::left) << "NAME" << std::setw(10) << "CODE" <<std::setiosflags(std::ios::right) << std::setprecision(2) << std::setw(10) << "COST" << std::endl;
    for(int i=0;i<5;i++){
        std::cout << books[i] << std::setw(5) << std::setiosflags(std::ios::left) << code[i] << std::setw(18) << std::setiosflags(std::ios::right) << std::setprecision(2) << std::setiosflags(std::ios::fixed) << std::setiosflags(std::ios::right) << cost[i]  << std::endl;
    }
}