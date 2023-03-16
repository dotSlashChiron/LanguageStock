#include <iostream>
class item
{
    int number; //private by default
    float cost; //private by default
public:
    void getdata(int, float); //prototype declaration,to be defined
    //Function defined inside class
    void displayData(void)
    {
        std::cout << "number: " << number << std::endl;
        std::cout << "cost: " << cost << std::endl;
    }
};
void item::getdata(int a,float b){
    number = a;
    cost = b;
}
int maincaaga(){

    item x;
    std::cout<<"\nobject x"<<"\n";
    x.getdata(100,299.95);
    x.displayData();
    item y;
    std::cout<<"\nobject y"<<"\n";
    y.getdata(200,175.50);
    y.displayData();
}