#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class INVENTORY{
    char name[10];
    int code; 
    float cost;
    public:
    void getData(void){
        cout << "Name \n> "; cin >> name;
        cout << "Code \n>" ; cin>> code;
        cout << "Price: \n> "; cin>>cost;
    }
    void putData(void){
        std::cout << setw(10) << name << setw(10) << setprecision(2) << setw(10) << cost << endl;
    }
};int main(){
    INVENTORY item;
    fstream inoutfile;

    inoutfile.open("STOCK.DAT",ios::ate|ios::in|ios::in|ios::out|ios::binary);
    inoutfile.seekg(0,ios::beg);
    cout << "CONTENTS OF STOCK\n";
    while(inoutfile.read((char *)&item,sizeof(item))){
        item.putData();
    }inoutfile.clear();
    // Add one more item 
    cout << "\nADD AN ITEM\n";
    item.getData();
    char ch;
    cin.get(ch);
    inoutfile.write((char *)&item,sizeof(item));
    inoutfile.seekg(0);
    cout << "CONTENTS OF APPENDED FILE";
    while(inoutfile.read((char*)&item,sizeof(item))){
        item.putData();
    }
    // Find number of objects in the file 
    int last = inoutfile.tellg();
    int n = last/sizeof(item);
    cout << "Number of Objects = " << n << std::endl;
    cout << "Total employees in the file " << last << std::endl;

    cout << "Enter object no to be updated\n";
    int object;
    cin >> object;
    cin.get(ch);
    int location = (object-1)*sizeof(item);
    if(inoutfile.eof()){
        inoutfile.clear();
    }
    inoutfile.seekp(location);
    cout << "Enter values of the object \n";
    item.getData();
    cin.get(ch);

    inoutfile.write((char *)&item, sizeof(item)) << flush;

    inoutfile.seekg(0);
    cout << "CONTENTS OF UPDATED FILE" << std::endl;
    while(inoutfile.read((char *)&item,sizeof(item))){
        item.putData();
    }inoutfile.close();
}