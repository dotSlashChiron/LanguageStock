#include <iostream>
#include <cstring>
class string{
    std::string a;
    public:
    string(){
        // a = "Default String created!";
    }
    string(std::string u){
        a = u;
    }
    std::string concat(string a){
        return a.a + this->a;
    }
    std::string concat(std::string b){
        return a+b;
    }
    std::string display(){
        return a;
    }
};
int cstrumain(){
    string rishabh("hi I am rishabh");
    string rishabh2("and I am also a coder");
    std::string merged = rishabh.concat(rishabh2);
    std::cout << merged << std::endl;
}