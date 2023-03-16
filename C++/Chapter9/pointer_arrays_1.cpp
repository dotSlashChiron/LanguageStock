#include <iostream>
using namespace std;
int  main(){
    int arr[3] = {22,23,29};
    int *aptr = &arr[0];
    for(int i=0;i<3;i++){
        std::cout << *aptr << "\n";
        aptr++;
    }
}