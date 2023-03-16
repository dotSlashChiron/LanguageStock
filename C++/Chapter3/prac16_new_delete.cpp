#include <iostream>
using namespace std;
class sample{
    private:
    float marks;
    float sallery;
    public:
    void display(void);
};
void sample::display(void){
    cout << "marks are " << marks << "\nsallery is " << sallery << endl;
}
int mainafa(){
    sample *ptr = new sample; //Creating a instance of class with new keyword
return 0;
}