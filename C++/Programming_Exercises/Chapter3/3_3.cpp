#include <iostream>
using namespace std;

int jogindermain(){
    int size;
    cout << "Enter a size of vector: ";
    cin >> size;
    for (int i=1;i<=size;i++)
    {
        for (int j = 1; j <= i; j++)
        {
           cout << i;
        }cout << endl;
        
    }
    

return 0;
}