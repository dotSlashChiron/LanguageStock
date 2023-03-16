#include <iostream>
class complex{
    float x,y;
    public:
    complex(){} // Copy constructo no arg
    complex(float a){ x = y = a;} // constructor-one arg
    complex(float real,float imag){ // constructor-two arg
        x = real;
        y = imag;
    } 
    friend complex sum(complex,complex);
    friend void show(complex);
};
complex sum(complex c1,complex c2){ // friend 
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return(c3);
}
void show(complex c) //friend
{
    std::cout << c.x << "+j"<<c.y << std::endl;
}
int nvidia(){
    complex A(2.7,2.5); // define and initialize
    complex B(1.6); // define and initialize
    complex C; // define

    C = sum(A,B); // sum() is a friend
    std::cout<<"A = "; show(A); // show() is also a friend
    std::cout<<"B = "; show(B); 
    std::cout<<"C = "; show(C); 

    // Another way to give initial values (second method)
    complex P,Q,R; // define P,Q,R
    P = complex(2.5,3.9); // initialize P
    Q = complex(1.6,2.5); // initialize Q
    R = sum(P,Q);

    std::cout<< "\n";
    std::cout<<"P = "; show(P);
    std::cout<<"Q = "; show(Q);
    std::cout<<"R = "; show(R);

    return 0;
}