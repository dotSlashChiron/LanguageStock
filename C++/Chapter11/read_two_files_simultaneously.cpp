// Read the files created in Program 11.2 -> working_with_multiple_files;

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main(){
    const int SIZE = 40+40;
    char line[SIZE];
    ifstream fin1,fin2; // create two input streams
    fin1.open("country");
    fin2.open("capital");
    for(int i=1;i<=10;i++){
        if(fin1.eof()!=0){
            cout << "Exit from country\n";
            exit(1);
        }
        fin1.getline(line,SIZE);
        cout << "Capital of " << line;
        if(fin2.eof()!=0){
            cout << "Exit from Capital\n";
            exit(1);
        }
        fin2.getline(line,SIZE);
        cout << line << "\n";
    }
}