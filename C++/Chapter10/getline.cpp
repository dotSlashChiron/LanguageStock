#include <iostream>
using namespace std;
int main(){
    int size = 20;
    char city[20];
    cout << "Enter city name: \n";
    cin >> city;
    cout << "City Name: " << city << "\n\n";

    cout << "Enter city name again: \n";
    cin.getline(city,size);
    cout << "City Name now: " << city << "\n\n";

    cout << "Enter another city name: \n";
    cin.getline(city,size);
    cout << "New city name: " << city << "\n\n";
}