#include <iostream>
class weight{
    int leter, ML;
    public:
    void getData();
    void putData();
    void sum_of_weight(weight,weight);
};
void weight::getData(){
    std::cout<<"in leter: ";
    std::cin>>leter;
    std::cout<<"in ML: ";
}
void weight::putData(){
    std::cout<<leter<<" leter and "<<ML<<" ML ";
}
void weight::sum_of_weight(weight w1,weight w2){
    ML = w1.ML+w2.ML;
    leter = ML/1000;
    ML = ML%1000;
    leter= w1.leter+w2.leter;
}
void print(std::string s){
    std::cout<<s<<std::endl;
}
int boa(){
    weight w1,w2,w3;
    std::cout<<"Enter weight in Leter and ML" <<std::endl;
    print("Enter Weight 1: ");
    w1.getData();
    print("Enter Weight 2: ");
    w2.getData();
    w3.sum_of_weight(w1,w2); //In the programming book it is without the object (sum_of_weight(...))
    print("Total Weight = ");
    w3.putData();
    return 0;
}