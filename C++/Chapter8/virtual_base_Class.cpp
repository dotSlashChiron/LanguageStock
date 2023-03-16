#include <iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void get_number(int a){
        this->roll_no = a;
    }
    void put_number(void){
        cout << "Roll no: " << roll_no << "\n";
    }
};
class test:virtual public student{
    protected:
    float part1, part2;
    public:
    void get_marks(float x,float y){
        this->part1 = x;
        this->part2 = y;
    }
    void put_marks(void){
        cout << "Marks Obtained: " << "\n"
        << "part1 = " << part1 << "\n"
        << "part2 = " << part2 << "\n";
    }
};
class sports:public virtual student{
    protected:
    float score;
    public:
    void get_score(float s){
        this->score = s;
    }
    void put_score(void){
        cout << "Sports wt: " << score << "\n\n";
    }
};
class result: public test,public sports{
    float total;
    public:
    void display(void);
};
void result::display(void){
    this->total = this->part1 + this->part2 + this->score;
    this->put_number();
    this->put_marks();
    this->put_score();
    cout << "Total % = " << total << "%\n";
}
int bhookmain(){
    result student1;
    student1.get_number(678);
    student1.get_marks(30.5,25.5);
    student1.get_score(7.0);
    student1.display();

    return 0;
}