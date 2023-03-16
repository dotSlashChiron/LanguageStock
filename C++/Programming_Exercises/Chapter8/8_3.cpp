#include <iostream>
// #include <cstring>
#include <string>
using std::string;
class staff
{
protected:
    int code;
    string name;

public:
};
class teacher : protected staff
{
    string subject;
    string book;

public:
    teacher()
    {
        std::cout << "Enter your name dear teacher: ";
        std::cin.ignore();
        std::getline(std::cin, this->name);
        std::cout << "Enter your subject ";
        std::cin.ignore();
        std::getline(std::cin, this->subject);
        std::cout << "Enter a book name to be published: ";
        std::cin.ignore();
        std::getline(std::cin, this->book);
    }
    void show_name()
    {
        for (auto &c : this->name)
        {
            std::cout << c;
        }
    }
};
class officer : protected staff
{
protected:
    int grade;

public:
    officer()
    {
        std::cout << "Enter your name dear officer: ";
        std::cin.ignore();
        std::getline(std::cin, this->name);
    }
    void show_name()
    {
        for (auto &c : this->name)
        {
            std::cout << c;
        }
    }
};
class typist : protected staff
{
protected:
    int speed;

public:
    typist(){};
    typist(bool ts)
    {
        if (ts)
            std::cout << "Enter your typing speed: ";
        std::cin >> this->speed;
    }
    void show_speed()
    {
        std::cout << "Your typing speed is " << this->speed << "WPM\n";
    }
};
class regular : protected typist
{
};
class casual : protected typist
{
protected:
    int wage;

public:
    casual()
    {
        std::cout << "Enter your daily wage: ";
        std::cin >> wage;
    }
    void show_wage()
    {
        std::cout << "Your wage is ₹" << this->wage << std::endl;
    }
};
void show_menu(){
    std::cout 
    << "1) Teacher\n"
    << "2) Officer\n"
    << "3) Typist\n"
    << "4) Casual\n";
}
void selectProfession(int x){
    if(x==1){
        teacher ts;
    }else if(x==2){
        officer of;
    }else if(x==3){
        typist tp;
    }else if(x==4){
        casual c;
    }else{
        std::cerr << "Invalid Choice! \n";
        selectProfession(x);
    }
}
int bholenathmain()
{
    show_menu();
    int pro_int;
    std::cout << "Hi what's your profession (1/2/3/4): ";
    std::cin>>pro_int;
    selectProfession(pro_int);
   
    return 0;
}