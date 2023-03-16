#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
    int size=80;
    char string[size];
    cout << "Enter a string now: ";
    cin.getline(string,size);
    int len = strlen(string);

    fstream file;
    cout << "\nOpening the 'TEXT' file and storing the string in it.\n\n";
    file.open("TEXT",ios::in|ios::out);
    for(int i=0;i<len;i++){
        file.put(string[i]);
    }
    file.seekg(0); // move the cursor to start; go to the start
    char ch;
    cout << "Reading the File Contents Now: ";
    while(file){
        file.get(ch);
        cout << ch;
    }
}