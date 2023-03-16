#include <iostream>
class code{
    int id;
    public:
    code(){} // default constructor
    code(int a){
        id = a;
    } // constructor again
    code(code &x){
        id = x.id; //copy in the value
    }
    void display(void){
        std::cout<<id;
    }
};
int mainfafas(){
    code A(100); // object A is created and initialized
    code B(A); // copy constructo called
    code C = A ;// copy constructor called again

    code D; // D is created, not initialized
    D = A; // copy constructor not called

    std::cout<<"\n id of A: "; A.display();
    std::cout<<"\n id of B: "; B.display();
    std::cout<<"\n id of C: "; C.display();
    std::cout<<"\n id of D: "; D.display();

    return 0;
}