#include <iostream>
using namespace std;

int m = 10; //global m
int mainqw(){
    int m = 20; // m declared again, local to the main
    {
        int k = m;
        int m = 30; // m declared again local to the inner block
        cout << "We are in innner block\n";
        cout << "k -> " << k << endl;
        cout << "m -> " << m << endl;
        cout << "::m -> " << ::m << endl;
    }
    cout << endl;
    cout << "We are in outer block" << endl;
    cout << "m -> " << m << endl;
    cout << "::m -> " << ::m << endl;
    // ::variable_name always refer to the global variable

return 0;
}