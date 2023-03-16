#include <iostream>
int &fun(int &);
int &fun(int & x){
    x++;
    return x;
}
int mafafin()
{
    int a = 5;
    fun(a) = a;
    std::cout<<a<<std::endl;
    fun(a) = ++a;
    std::cout<<a<<std::endl;
    fun(a) = a++;
    std::cout<<a<<std::endl;
    std::cout<<"+++"<<"\n";
    int inc = 5;
    std::cout<<inc<<std::endl;
    // inc++;
    //std::cout<<inc<<std::endl;
    ++inc;
    std::cout<<inc<<std::endl;
    return 0;
}