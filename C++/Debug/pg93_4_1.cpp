#include <iostream>
using namespace std;
int sub(int a = 20,int b){
    int result;
    result = a - b;
    return result;
}
int xsfamain(){
    int a = 100;
    int b = 200;
    int result;
    result = sub(b);
    cout << "Value 1 : " << result;
    result = sub(a);
    cout << "Value 2 : " << result;
    return 0;
}