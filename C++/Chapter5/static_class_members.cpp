#include <iostream>
class item{
    static int count;
    int number;
    public:
    void getdata(int a){
        number = a;
        count++;
    }
    void getCount(void){
        std::cout<<"count : ";
        std::cout<< count<< std::endl;
    }
};
int item :: count;

int l(){
    item a,b,c;
    a.getCount();
    b.getCount();
    c.getCount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    std::cout<<"After Reading Data"<<std::endl;
    a.getCount();
    b.getCount();
    c.getCount();
    return 0;
}