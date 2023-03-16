/*This program defined a class called Point that stores x and y coordinates of a point. The class use parameterized constructor for initializing the class objects*/
#include <iostream>
class Point{
    int x,y;
    public:
    Point(int a,int b){ //inline parameterized constructor definition
        x = a;
        y = b;
    }
    void display(){
        std::cout<<"{"<<x<<","<<y<<"}\n";
    }
};
int ryzen(){
    Point p1(1,1); //invokes parameterized constructor
    Point p2(5,10);
    std::cout<<"Point p1 = ";
    p1.display();
    std::cout<<"Point p2 = ";
    p2.display();
    return 0;
}