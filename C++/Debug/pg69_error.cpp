#include <iostream>
using namespace std;
char *allocateMemory();
int apnomain()
{
    char *str;
    str = allocateMemory();
    cout << str;
    delete str;
    str = " ";
    cout << str;
    return 0;
}
char* allocateMemory(){
    str = "Memory Allocation Test...";
    return str;
}