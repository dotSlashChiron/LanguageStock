#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter values of A and B \n";
    cin >> a;
    cin >> b;
    int x = a-b;
    try{
        if(x != 0){
            cout << "Result (a/x) is " << float(a/x) << endl;
        }else{
            throw(x);
        }
    }catch(int i){
        cout << "Exception caught: DIVIDE BY ZERO\n";
    }
    cout << "END";
}