#include <iostream>
using namespace std;
void print(char x)
{
    cout << x << endl;
}
void print(int x)
{
    cout << x << endl;
}
void print(string x)
{
    cout << x << endl;
}
int maina()
{
    int x;    // integer x declared
    int *ip;  // integer pointer
    ip = &x;  // address of integer x assigned to integer ip
    *ip = 10; // 10 assigned to integer x through indirection
    cout << "Printing IP " << x << endl;
    cout << "Printing the *ip " << *ip << endl;
    // char * const ptr1 = "GOOD"; // Constant Pointer
    int m;
    const int *ptr2 = &m; //pointer to a constant
    const char *const cp = "xyz";
    print(cp);

    return 0;
}