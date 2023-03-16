#include <iostream>

using namespace std;
enum shape{
    circle,rectangle,triangle
};
int mainaa(){
    cout << "Enter Shape Code: ";
    int code;
    cin >> code;
    // This while loop is doing this
    // It examines if the user input is equal to any of the initialized value of the enumerators then it repeats the process and jumps back to the starting of the loop...
    while(code >= circle && code <= triangle){
        switch(code){
            case circle:
            break;
            case rectangle:
            break;
            case triangle:
            break;
        }
        cout << "Enter Shape Code: ";
        cin >> code;
    }
    cout << "BYE \n";
    
    return 0;
}