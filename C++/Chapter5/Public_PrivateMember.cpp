#include <iostream>
class xyz{
    int x;
    int y;
    void read(int a){
        std::cout<<a<<std::endl;
    }
    public:
    int z;
};
int mainfafa(){
    xyz p;
    p.z=10; // OK, z is public member of class
    //p.y=19; //error, x is a private member of the class
    std::cout<<p.z<<std::endl;
    // p.read(); //Inaccessible function
    return 0;
}