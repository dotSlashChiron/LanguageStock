#include <iostream>
#include <cmath>
void getFactorial(int x){
    int factorial = 1;
    for(int i=1;i<=x;i++){
        factorial = factorial*i;
    }
    // in steps if x = 3
    // in 1st run factorial = value of i = 1, i*factorial = 1
    // in 2nd run factorial = value of i = 2, i*factorial = 2
    // in 3rd run factorial = value of i = 3, i*factorial = 6
 
    std::cout << "Factorial of " << x << " is " << factorial << std::endl;
}
int main(){
    int x;
    std::cout << "Enter a number : ";
    std::cin >> x;
    getFactorial(x);
    return 0;
}