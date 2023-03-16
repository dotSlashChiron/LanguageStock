#include <iostream>
#include <iomanip>
std::ostream &currency(std::ostream &output){
    output << "$";
    return output;
}
std::ostream &form(std::ostream &output){
     output.setf(std::ios::showpos);
     output.setf(std::ios::showpoint);
     output.fill('*');
     output.precision(2);
     output << std::setiosflags(std::ios::fixed) << std::setw(10);
     return output;
}
int main(){
    std::cout << currency << 28 << std::endl;
    std::cout << currency << form << 7864.5;
}