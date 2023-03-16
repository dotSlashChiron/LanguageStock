#include <iostream>
class integer{
    int m,n;
    public:
    integer(int x,int y); //parametrized constructor
};
integer::integer(int x,int y){
    m = x; n = y;
}
int cpy(){
    integer int1 = integer(0,100); // explicit call
    integer int2 = integer(2,100); // implicit call
    return 0;
}
// Constructors can also be defined as inline functions
// A constructor cannot have its own class object in the paerameter
// A constructor can accept its own class object reference in the parameter
