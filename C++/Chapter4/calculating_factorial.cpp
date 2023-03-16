#include <iostream>
using namespace std;
long fact(int n){
    if(n == 0)
    return 1;

    return (n*fact(n-1));
}
int mainop(){
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << fact(num) << endl;

return 0;
}