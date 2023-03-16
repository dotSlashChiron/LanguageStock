#include <iostream>
class age{
    private:
    int child_age;
    public:
    void setAge(void){
        child_age = 20;
    }
    int father_age(age);
};
int age::father_age(age d){
    d.child_age += 15;
    return d.child_age;
}
void print(std::string s){
    std::cout<<s<<std::endl;
}
void print(int n){
    std::cout<<n<<std::endl;
}
void print(std::string s,int n){
    std::cout<<s<<n<<std::endl;
}
int fafmain(){
    age D;
    D.setAge();
    int age = D.father_age(D);
    print(age);
    print("Your Fathers age is ",age);
    return 0;
}