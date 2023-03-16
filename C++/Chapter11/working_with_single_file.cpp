#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream outf("ITEM");
    cout << "Enter item name: ";
    char name[30];
    cin >> name;
    outf << name << " ";
    cout << "Enter an item cost: ";
    float brain; cin >> brain;
    outf << brain << " ";
    outf.close();
    ifstream inf("ITEM");
    inf>>name;
    inf>>brain;
    cout << " ";
    cout << "ITEM NAME: " << name << " ";
    cout << "BRAIN COST: " << brain << " ";
    inf.close();
}