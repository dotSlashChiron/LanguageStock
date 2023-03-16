#include <iostream>
const int size = 3;
class employee{
    char name[30];
    float age;
    public:
    void getData(void);
    void putData(void);
};
void employee::getData(void){
    std::cout<<"Enter Name: ";
    std::cin>>name;
    std::cout<<"Enter age: ";
    std::cin>>age;
}
void employee::putData(void){
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Age: "<<age<<std::endl;
}
int mainxafs(){
    employee manager[size];
    for(int i=0; i<size;++i){
        std::cout<<"Details of Manager "<<i+1<<"\n";
        manager[i].getData();
    }
    std::cout<<std::endl;
    for(int i=0;i<size;++i){
        std::cout<<"\nManager "<<i+1<<std::endl;
        manager[i].putData();
    }
    return 0;
}