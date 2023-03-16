// Creating files with open() function

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;        // create output stream
    fout.open("country"); // connect country to it
    fout << "United States of America\n";
    fout << "United Kingdom\n";
    fout << "South Korea\n";
    fout.close();

    fout.open("capital"); // connect capital
    fout << "Washington\n";
    fout << "London\n";
    fout << "Seoul\n";
    fout.close(); // disconnect capital

    // Reading the files
    const int N = 80;
    char line[N];

    ifstream fin;        // create input stream
    fin.open("country"); // connect country to it

    cout << "Contents of Country File\n";
    while (fin)
    {                         // check end of file
        fin.getline(line, N); // read line
        cout << line;         // display it
    }
    fin.close();         // disconnect country
    fin.open("capital"); // contents capital

    cout << "\nContents of Capital File\n";
    while (fin)
    {
        fin.getline(line, N);
        cout << line;
    }
    fin.close();
}