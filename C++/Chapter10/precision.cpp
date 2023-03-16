#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout << "Precision set to 3 digits \n\n";
    cout.precision(3);

    cout.width(10);
    cout << "VALUE: ";
    cout.width(15);
    cout << "SQRT_OF_VALUE: \n";
    for(int i=1;i<=10;i++){
        cout.width(10);
        cout << i;
        cout.width(15);
        cout << sqrt(i);
        cout << "\n";
    }
    cout << "\nPrecision set to 5 digits \n\n";
    cout.precision(11);
    cout << "sqrt(10) = " << sqrt(10) << "\n";

    cout << "Precision set to default \n\n";
    cout.precision();
    cout << "sqrt(10) = " << sqrt(10) << "\n";
    return 0;
}