#include <iostream>
#include <vector>
class vectormanipulations
{
    std::vector<float> vec;

public:
    vectormanipulations()
    {
    }
    void createVector(void);
    void createVector(int n);
    void displayVec(void);
    void addVectors(vectormanipulations, vectormanipulations);
    void takeElem(void);
};
class Terminal : public vectormanipulations
{
    public:
    void showMenu(void);
};
void Terminal::showMenu(void){
    std::cout<<"1) Create Vector"<<std::endl;
    std::cout<<"2) Display Vector" << std::endl;
    std::cout<<"3) Exit The Program"<<std::endl;
}
void vectormanipulations::takeElem(void)
{
    short n;
    int t;
    std::cout << "How many elements you wish to push_back()" << std::endl;
    std::cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        std::cout << "Enter element number " << i << " : ";
        std::cin >> t;
        vec.push_back(t);
    }
}
void vectormanipulations::createVector(void)
{
    std::cout << "Blank Vector Created!" << std::endl;
}
void vectormanipulations::createVector(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        vec[i];
        std::cout << "Your Object No " << i << " was created successfully" << std::endl;
    }
};
void vectormanipulations::displayVec(void)
{
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
void vectormanipulations::addVectors(vectormanipulations a, vectormanipulations b)
{
    a.displayVec();
    b.displayVec();
}

int ankhmain()
{
    vectormanipulations a, b;
    Terminal t;
    t.showMenu();
    int n;
    while(n !=3 ){
        std::cin>>n;
        if(n==1){
            a.createVector(1);
            std::cout<<"What's your opinion?";
            std::cin>>n;
        }else if(n==2){
            a.displayVec();
        }else{
            return(-1);
        }
    } 
    
}