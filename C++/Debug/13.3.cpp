#include <iostream>
using namespace std;
int main()
{
    int a, b, r;
    a = 10;
    b = 0;
    try{
        if(b==0) throw 0;
        r = a/b;
        cout << "Result is " << r << std::endl;
    }catch(int arg){
        cout << "Exception caught: Division by 0" << endl;
    }catch(...){
        cout << "Exception caught first" << endl;
    }
    cout << "End of Program";
    return 0;
}