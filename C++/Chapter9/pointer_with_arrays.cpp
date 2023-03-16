#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {
        1,
        99,
        4,
        37,
        88,
        3,
        19,
        45,
        62,
        87};
    int i, num, *ptr;
    // Assigning the base address of array to arr to ptr
    ptr = arr;
    cout << "Enter the element to be searched: ";
    cin >> num;
    bool nfound = false;
    for(i=0;i<10;i++){
        if(*ptr==num){
            nfound = true;
            break;
        }else if(*ptr!=num){
            ptr++;
            continue;
        }
    }
    if(nfound){
        std::cout << "Number Was Found!" << "\n";
    }else{
        std::cerr << "Number Not Found!" << "\n";
    }
    return 0;
}