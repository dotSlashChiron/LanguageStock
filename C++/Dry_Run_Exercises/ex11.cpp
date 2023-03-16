#include <iostream>
#include <cmath>
#define PI 3.14
//Question -> Write a program to compute the area of a triangle and a circle by overloading the area() function
void area(int radius);
void area(int base,int height);
int maifasn(){
    int radius;
    int &base = radius;
    std::cout<<"Enter Radius or Base Of Triangle"<<std::endl;
    std::cin>>radius;
    std::cout<<"Enter Height of Triangle"<<std::endl;
    int height;
    std::cin>>height;
    area(radius);
    area(base,height);
    return 0;
}
void area(int radius){
    std::cout<<"Your area of circle is: ";
    std::cout<<PI*radius*radius<<std::endl;
}
void area(int base,int height){
    std::cout<<"Your area of triangle is: ";
    std::cout<<(base*height)/2<<std::endl;
}