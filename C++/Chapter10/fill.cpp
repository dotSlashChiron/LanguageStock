#include <iostream>
int main(){
    std::cout.fill('<');
    std::cout.precision(3);
    for(int n=1;n<=6;n++){
        std::cout.width(5);
        std::cout << n;
        std::cout.width(10);
        std::cout << 1.0/float(n) << "\n";
        if(n==3){
            std::cout.fill('>');
        }    }
         std::cout << "\nPadding changed \n\n";
        std::cout.fill('#');
        std::cout.width(15);
        std::cout << 12.345678;
}