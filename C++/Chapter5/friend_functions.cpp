#include <iostream>
class sample
{
    int a;
    int b;

public:
    void setValue(void)
    {
        a = 25;
        b = 40;
    }
    friend float mean(sample s);
};
float mean(sample s){
    return float(s.a+s.b)/2;
}
int mainopooo(){
    sample x;//* object x created;
    x.setValue();
    std::cout<<"Mean value = "<< mean(x)<<std::endl;
}