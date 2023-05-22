#include <iostream>
using namespace std;
template <class T1, class T2>
class Person{
    T1 m_t1;
    T2 m_t2;
    public:
    Person(T1 t1,T2 t2){
        m_t1 = t1;
        m_t2 = t2;
        cout << m_t1 << " " << m_t2 << endl;
    } 
};
int main(){
    Person<int,float>obj1(1,34.4);
    return 0;
}