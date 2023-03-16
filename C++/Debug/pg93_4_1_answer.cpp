#include <iostream>
using namespace std;
int sub(int a,int b= 20){
    int result = a-b;
    return result;
}
int contentmain(){
    int a = 100;
    int b = 200;
    int result;
    result = sub(a);
    cout << "Value : " << result << endl;
    result = sub(a,b);
    cout << "Value : " << result << endl;
    return 0;
}