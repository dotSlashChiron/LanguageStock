#include <iostream>
using namespace std;
class arr{
    int a[5];
    public:
    arr(int *s){
        int i;
        for(i=0;i<5;i++){
            a[i] = s[i];
        }
    }
    int operator[](int index){
        return (a[index]);
    }
};
int maidafn(){
    int x[5] = {1,2,3,4,5};
    arr A(x);
    int i;
    for(i=0;i<5;i++){
        std::cout<<A[i]<<"\t"; //using subscript operator to access the private array elements
    }
}