#include <iostream>
#define ARR_LIMIT 5
template <class T>
void fun(T arg1, int arg2){
    std::cout << "Fun 1: " << arg1 << " " << arg2 << std::endl;
}
template <class T1, class T2>
void fun(T1 arg1,T2 arg2){
    std::cout << "Fun 2: " << arg1 << " " << arg2 << std::endl;
}
int main(){
    fun(25,25.0);
}