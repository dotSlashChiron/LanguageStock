#include <iostream>
using namespace std;
int mainxx(){
    int *arr;
    int size;
    cout << "Enter the size of the integer array: ";
    cin >> size;
    cout << "Creating an array of size " << size << "..";
    if (!arr) // if the user entered value is not available then if loop will turn true
    {
        cout << "You are running out of storage!" << endl;
        cout << "Allocation failed! " << endl;
        return -1;
    }else{
         arr = new int[size];
    }  
    cout << "\nDynamic allocation of memory for array arr is succesful.";
    delete arr;



}