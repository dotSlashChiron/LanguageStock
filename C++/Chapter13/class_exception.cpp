#include <iostream>
#include <cstring>
using namespace std;
class Error
{
    int err_code;
    std::string err_dec;

public:
    Error(int c, std::string d)
    {
        err_code = c;
        err_dec = d;
    }
    void err_display(void)
    {
        cout << "\nError Code: " << err_code << "\n"
             << "Error Description: " << err_dec;
    }
};
int main()
{
    try
    {
        cout << "Press any key to throw a test exception. ";
        cin.get();
        throw Error(99, "Test Exception");
    }
    catch (Error e)
    {
        cout << "\nException was successfully caught";
        e.err_display();
    }
    return 0;
}