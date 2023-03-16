#include <iostream>
using namespace std;

int mainxase(){
    int *p = new int;
    float *q = new float;
    *p = 25;
    *q = 7.5;
    //For arrays
    int *c = new int[10];
    c[9]= 23;
    cout << "*c[9] -> " << c[9] << endl;
   

    

return 0;
}
/*
- An object can be created by using new and destoryed by delete data
- A data object created inside a block with a new will remain in existence untill its explicitly destoryed using delete operator
- By this way lifetime of an object is directly under our control and is unrelated to the block structure of the program
- Pointers can only be declared (created) using pointers
- New can be used to create a memory space for any data type including user-defined data types such as arrays,structures and classes. 
- It can also be used for multi-dimensional array
----------------------------------------------------------------->
- Advantages of new operators
1. It automatically computes the size of the data object, we need not use the operator sizeof.
2. It automatically returns the correct pointer type, no need to use of type_casting.
3. It is possible to initialize the object while creating the memory space
4. Like any other operator, new and delete can be overloaded
*/