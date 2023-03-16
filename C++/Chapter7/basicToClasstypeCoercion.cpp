#include <iostream>
class time{
    int hrs;
    int mins;
    public:
    time(){};
    time(int t){
        hrs = t/60; // t in mins
        mins = t%60; 
    }
};
int main90x(){
    int duration = 85;
    // time t = duration;
    return 0;
}