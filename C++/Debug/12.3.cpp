#include <iostream>
using namespace std;
template <class T1, class T2>
T1 &Max(T1 t1,T2 t2){
    return t1>t2?t1:t2;
}
int main(){
    cout << ++Max(2,4);
    return 0;
}