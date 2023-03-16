#include <iostream>
class shape{
    public:
    double fig1,fig2;
    public:   
    void get_data(){
        std::cout << "Enter the length and width of the figure: ";
        std::cin >> fig1 >> fig2;
    }
    void copy_data(shape &obj){
        this->fig1 = obj.fig1;
        this->fig2 = obj.fig2; 
    }
    virtual void display_area(){};
};
class triangle:public shape {
    double area;
    public:
    void display_area(){
        area = (fig1*fig2)/2;
        std::cout << "Area of the triangle is: " << area << std::endl;
    }
    
};
class rectangle:public shape{
    double area;
    public:
    void display_area(){
        area = fig1*fig2;
        std::cout << "The area of the rectangle is: " << area << std::endl;
    }
};
class circle:public shape{
    double area;
    public:
    void display_area(){
        area = 3.14*fig1*fig1;
        fig2 = 0;
        std::cout << "The area of the circle is: " << area << std::endl;
    }
};
int main(){
    shape myShape;
    triangle myTriangle;
    rectangle myRectangle;
    myShape.get_data();
    myTriangle.copy_data(myShape);
    myTriangle.display_area();
    myRectangle.copy_data(myShape); 
    myRectangle.display_area();
    circle myCircle;
    myCircle.copy_data(myShape);
    myCircle.display_area();
    // derived classes ko shape class ki values nhi pata hai. Isliye copy_data() mein shape class mein fig1,fig2 nhi pass kar raha hai. Copy data shape class ko object lekar derived classes ke liye values update kar deta hai.

    return 0;
}