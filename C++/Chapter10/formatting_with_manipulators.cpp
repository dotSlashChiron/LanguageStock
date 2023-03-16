#include <iostream>
#include <iomanip>
using std::ios;
int main(){
    std::cout.setf(ios::showpoint);
    std::cout << std::setw(5) << "n"
    << std::setw(15) << "INVERSE_OF_N"
    << std::setw(15) << "SUM OF TERMS\n\n";

    double term, sum = 0;
    for(int n=1;n<=10;n++){
        term = 1.0/float(n);
        sum += term;
        std::cout << std::setw(5) << n << std::setw(14) << std::setprecision(4) << std::setiosflags(ios::scientific) << term << std::setw(13) << std::resetiosflags(ios::scientific) << sum << std::endl;
    }
}