#include <iostream>
#include <cstring>
using namespace std;
class person{
    char name[20];
    float age;
    public:
    person(char *s, float a){
        strcpy(name,s);
        age = a;
    }
    person &person::greater(person &x){
        if(x.age >= age){
            return x;
        }else{
            return *this;
        }
    }
    void display(void){
        cout << "Name: " << this->name << "\n"
        << "Age: " << this->age << "\n";
    }
};
int main(){
    person P1("JOHN",37.50), P2("AHMED",29.0),P3("HEBBER",40.25);
    person P = P1.greater(P3);
    cout << "Elder person is: \n";
    P.display();    
}
