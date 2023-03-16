#include <iostream>
using namespace std;
class sample{
    private:
    int data1;
    char data2;
    public:
    void set(int i,char c){
        data1 = i;
        data2 = c;
    }
    void display(void){
        cout << "Data1 = " << data1 << endl;
        cout << "Data2 = " << data2 << endl;
    }
};
int mainaaa(){
    sample *s_ptr;
    try{
        s_ptr = new sample;
    }
    catch(bad_alloc){
        cout << "Bad Allocation..!" << endl; cout << "The program will terminate now.." << endl;
        return -1;
    }
    s_ptr->set(23,'A');
    s_ptr->display();
    delete s_ptr;
    

return 0;
}