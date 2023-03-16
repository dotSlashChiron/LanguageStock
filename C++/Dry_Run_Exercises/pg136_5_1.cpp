#include <iostream>
class personal{
    public:
    int p();
};
int personal::p(){
    return 1;
}
int mainfas(){
    personal a;
    //a.x = &personal::p;
    //std::cout<<((a.*(a.x))());
}