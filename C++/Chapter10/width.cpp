#include <iostream>
using namespace std;
int main(){
    int items[4] = {10,8,12,15};
    int cost[4] = {75,100,60,69};

    cout.width(5);
    cout << "ITEMS";
    cout.width(8);
    cout << "COST";

    cout.width(25-5);
    cout << "TOTAL VALUE: \n";

    int sum = 0;
    for(int i=0;i<4;i++){
        cout.width(5);
        cout << items[i];

        cout.width(8);
        cout << cost[i];

        int value = items[i]*cost[i];
        cout.width(15+5);
        cout << value << "\n";
        sum += value;
    }
    cout << "\nGrand Total = ";
    cout.width(2);
    cout << sum << "\n";
    return 0;
}