#include <iostream>
int count = 0;
class test{
    public:
    test(){
        count++;
        std::cout<<"\n\nConstructor Msg: Object Number "<< count <<" created ..."; 
    }
    ~test(){
        std::cout<<"\n\nDestructor Msg: Object Number "<<count <<" destroyed ...";
        count--;
    }
};
int maindestructor(){
    std::cout<<"Inside the main block...";
    std::cout<<"\n\nCreating first object T1...";
    test T1;{
        // Block 1
        std::cout<<"\n\nInside Block 1...";
        std::cout<<"\n\nCreating two more object T2 and T3...";
        test T2,T3;
        std::cout<<"\n\nexiting Block 1"<<std::endl;
    }
    std::cout<<"\n\nexit successful...\n";
    std::cout<<"\n\nBack Inside the main block ...";
    return 0;
}