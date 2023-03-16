#include <iostream>
class test{
    int *a;
    public:
    test(int size){
        a = new int[size];
        std::cout<<"\n\nConstructor Msg: Integer array of size " << size << " created...";
    }
    ~test(){
        delete a;
        std::cout<<"\n\nDestructor Msg: Freed up the memory allocated for integer array";
    }
};
int mainxx2(){
    int s;
    std::cout<<"Enter the size of array: ";
    std::cin>>s;
    std::cout<<"\n\nCreating an object of test class...";
    test T(s);
    std::cout<<"\n\nExiting the program...";
    return 0;
}