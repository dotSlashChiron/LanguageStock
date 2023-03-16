#include <iostream>
int findMax(int &x,int &y,int &z){
    if (x > y && x > z){
        return x;
    }else if(y > z && y > x){
        return y;
    }else if(z > x && z > y){
        return z;
    }else{
        std::cerr<<"Error Found"<<std::endl;
        return 0;
    }
}
int mfaain(){
    std::cout<<"Enter two numbers"<<std::endl;
    int x,y,z;
    std::cin>>x>>y>>z;
    int maxof3 = findMax(x,y,z);
    std::cout<<maxof3<<std::endl;

}