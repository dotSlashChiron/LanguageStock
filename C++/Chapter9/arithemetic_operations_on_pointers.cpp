#include <iostream>
using namespace std;
int yalgaarmain(){
    int arr[] = {
        56,75,22,18,90
    };
    int *ptr;
    int i;
    cout << "The values of are: ";
    for(i=0;i<5;i++){
        cout << arr[i] << "\t";
    }cout << "\n";
    /* Allocating the base address of array to pointer  */
    ptr = arr;
    /* Printing the value in the array */
    cout << "Value of ptr: " << *ptr << "\n";
    cout << "\n";
    ptr++;
    cout << "Value of ptr++ : " << *ptr << "\n";
    ptr--;
    cout << "Value of ptr-- : " << *ptr << "\n";
    ptr=ptr+2;
    cout << "Value of ptr+2 : " << *ptr << "\n";
    ptr -= 1;
    cout << "Value of ptr-1 : " << *ptr << "\n";
}