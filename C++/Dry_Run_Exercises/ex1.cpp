#include <iostream>
using namespace std;

int e2main(){
    int i = 5;
    while(i){
        switch(i){
            default:
            case 4:
            case 5:
            break;
            case 1:
            continue;
            case 2:
            case 3:
            break;
        }
        i--;
    }

return 0;
}