#include <iostream>
using namespace std;
template <class T>
void bubble(T a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=n-1;i<j;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
}
template <class X>
void swap(X *a, X *b){
    X temp = a;
    a = b;
    b = temp;
}
int main(){
    int x[5] = {10,50,20,30,40};
    float y[5] = {1.1,5.5,2.2,3.3,4.4};

    bubble(x,5);
    bubble(y,5);

    cout << "Sorted x-array: ";
    for(int i=0;i<5;i++){
        cout << x[i] << " ";
    }
    cout << endl;
    cout << "Sorted y-array: ";
        for(int i=0;i<5;i++){
        cout << y[i] << " ";
    }
    return 0;
}