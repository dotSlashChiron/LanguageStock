#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int mainafa()
{
    int num = 10; //This is called compiled time initliazation
    cout << num << endl;
    int num2;
    cin >> num2;
    int sum = num + num2; // Dynamic Intiliazation  
    return 0;
}