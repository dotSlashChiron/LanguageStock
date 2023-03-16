#include <iostream>
using namespace std;
class test{
    public:
    int num;
    test(int j){
        num = j;
    }
    test* operator->(void){
        return this;
    }
};
int maindil(){
    test T(5);
    test *ptr = &T;
    std::cout<<"T.num = "<< T.num;
    std::cout<<"\nPtr->num = "<<ptr->num;
    std::cout<<"\nT->num = "<<T->num;
    return 0;
}