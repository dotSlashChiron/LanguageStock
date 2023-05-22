#include <iostream>
using namespace std;
void test(int x) throw(int, double)
{
    if (x == 0)
        throw 'x';
    else if (x == 1)
        throw x;
    else
    {
        if (x == -1)
            throw 1.0;
    }
    cout << "End of Func() block \n";
}
int main()
{
    try
    {
        cout << "Testing Throw Restrictions \n";
        cout << "X == 0 \n";
        test(0);
        cout << "x == 1 \n";
        test(1);
        cout << "x == -1 \n";
        test(-1);
        cout << "x == 2 \n";
        test(2);
    }
    catch (char c)
    {
        cout << "Caught a character \n";
    }
    catch (int m)
    {
        cout << "Caught and integer \n";
    }
    catch (double d)
    {
        cout << "Caught a double \n";
    }
    cout << "End of try-catch system \n\n";
}