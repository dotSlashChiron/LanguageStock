#include <iostream>
using namespace std;
int main()
{
    int a, b, r;
    a = 10;
    b = 0;
    try
    {
        if (b == 0)
            throw "Divisior is 0";
        r = a / b;
        cout << "Result = " << r << endl;
    }
    catch (int arg)
    {
        cout << "Exception Caught" << endl;
    }catch(...){
        cout << "Default Exception \n";
    }
    cout << "End of program";
    return 0;
};