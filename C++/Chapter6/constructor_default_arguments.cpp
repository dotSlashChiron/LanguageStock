#include <iostream>
class beta{
    int x,y,z;
    public:
    beta(int Ax,int Ay,int Az=1){
        x = Ax;
        y = Ay;
        z = Az;
    }
    void show(beta a){
        std::cout<<"beta.x = "<< a.x << "\n";
        std::cout<<"beta.y = "<< a.y << "\n";
        std::cout<<"beta.z = "<< a.z << "\n";

    }
};
int mainxfa(){
    beta ob(2,3);
    ob.show(ob);
    return 0;
}