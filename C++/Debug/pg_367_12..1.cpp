#include <iostream>
using namespace std;
template <class Tx,class Ty>
class Test{
    int intNumber;
    float floatNumber;
    public:
    Test(){
        intNumber = 0;
        floatNumber = 0.0;
    }
    int getNumber(){
        return intNumber;
    }
    float getNumber(){
        return floatNumber;
    }
};
int main(){
    Test <int, float> obj1;
    obj1.getNumber();
    return(0);
}

//Solution: Overloading can't be performed on the basis of return types of the function. So some more information must be provided iot make the code work