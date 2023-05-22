#include <iostream>
using namespace std;
int main(){
    int p,q;
    cout << "Input two integer  numbers: ";
    cin >> p >> q;
    try
    {
        if(q!=0){
            float div = (float)p/q;
            if(div<0) throw div;
            cout << "p/q = " << div;
        }else{
            throw (q);
        }
    }
    catch(int m)
    {
        cout << "Exception Caught: Division by Zero";
    }catch (char t){
        cout << "Exception Caught: Division is less than 1";
    }
    return 0;
    
}