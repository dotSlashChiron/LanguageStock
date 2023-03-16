#include <iostream>
void show(int a){
    std::cout << a << std::endl;
}
void show(float a){
    std::cout << a << std::endl;
}
int afmain(){
    int a = 2;
    float b = 2.5;
    show(a);
    show(b);
    return 0;
}