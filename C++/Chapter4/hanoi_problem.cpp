#include <iostream>
using namespace std;
void TOH(int d,char tower1,char tower2,char tower3){
    if(d == 1){ //Base case
        cout << "\nShift top disk from tower " << tower1 << " to tower " << tower2;
        return;
    }
    TOH(d-1,tower1,tower2,tower3); //Recursive Function call
    cout << "Shift top disk from tower " << tower1 << " to tower " << tower2;

    TOH(d-1,tower3,tower2,tower1); //recursive function call
}
int mainxaf(){
    int disk;
    cout << "Enter the number of disks: ";
    cin >> disk;
    if (disk<1)
    cout << "There are no disks to shift";
    else
    cout << "There are " << disk << "disk in tower 1\n";
    TOH(disk,'1','2','3');
    cout << "\n" << disk << "disks in tower 1 are shifted to tower 2\n";

return 0;
}