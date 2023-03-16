#include <iostream>
class item{
    private:
    int x;
    friend void swap(item &obj1,item &obj2);
    public:
    item(){
        std::cout << "Enter the value of x: "; std::cin>>x;
    }
    void display_value(){
        std::cout << "The value of x -> " << this->x << std::endl;
    }
};
void swap(item &obj1,item &obj2){
    item* list[2] = {&obj1,&obj2};
    int temp = list[0]->x;
    list[0]->x = list[1]->x;
    list[1]->x = temp;     
}
int main(){
    item obj1,obj2;
    obj1.display_value();
    obj2.display_value();
    swap(obj1,obj2);
    std::cout << "After swapping" << std::endl;
    obj1.display_value();
    obj2.display_value();
    return 0;

}