#include <iostream>
class stm{
    static int a;
    int number;
    public:
    void increment(int b){
        number=b;
        a++;
    }
    static void show(void){
        std::cout<<a<<std::endl;
    }
};
int stm::a;
typedef int a;
int famain(){
    stm st1,st2,st3;
    st1.increment(5);
    st1.show();
    st2.show();
    st3.show();
    std::cout<<"\n";
    std::cout<<typeid(a).name()<<std::endl;
    return 0;
}

//* Memory doesn't forgets the value of static int a even if other objects of the class are using it.
//* a is static and doesn't forget untill the end of the program