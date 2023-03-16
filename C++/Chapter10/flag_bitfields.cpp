#include <iostream>
int main(){
    int num;
    std::cout << "Enter an integer value: ";
    std::cin >> num;

    std::cout << "The hexadecimal, octal and decimal representation of "<< num << " is: ";
    std::cout.setf(std::ios::hex,std::ios::basefield);
    std::cout << num << ", ";

    std::cout.setf(std::ios::oct,std::ios::basefield);
    std::cout << num << ", ";

    std::cout.setf(std::ios::dec,std::ios::basefield);
    std::cout << num << " respectively";
}