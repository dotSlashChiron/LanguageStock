#include <iostream>
class item{
    int item;
    float cost;
    public:
    void getData(int,float);
    void displayData(void);
};
void item::getData(int i,float f){
    item = i;
    cost = f;
}
void item::displayData(void){
    std::cout<<"The item ID is ->"<<item<<std::endl;
    std::cout<<"The cost of item is ->"<<cost<<std::endl;
}   
int mainvvv(){
    item x,y;
    x.getData(23,24.2);
    x.displayData();
}