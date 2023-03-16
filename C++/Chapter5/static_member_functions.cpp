#include <iostream>
class test
{
    int code;
    static int count;
    public:
    void setCode(void){
        code = ++count;
    }
    void showCode(void)
    {
        std::cout<<"Object Number"<<code<<std::endl;
    }
    static void showCount(void){
        std::cout<<"Count : "<<count<<std::endl;
        // std::cout<<"code: "<<code<<std::endl; //!code is not a static member
    }
};
int test::count;
int xaf(){
    test t1,t2;
    t1.setCode();
    t2.setCode();
    test::showCount();
    test t3;
    t3.setCode();
    test::showCount();
    t1.showCode();
    t2.showCode();
    t3.showCode();
}