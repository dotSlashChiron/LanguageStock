#include <iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void get_number(int a){
        roll_number = a;
    }
    void put_number(void){
        cout << "Roll No: " << roll_number << "\n";
    }
};
class test:public student{
    protected:
    float part1, part2;
    public:
    void get_marks(float x,float y){
        part1 = x;
        part2 = y;
    }
    void put_marks(void){
        cout << "Marks obtained: " << "\n"
            << "Part1 = " << part1 << "\n"
            << "Part2 = " << part2 << "\n";
    }
};
class sports{
    protected:
    float score;
    public:
    void get_score(float a){
        score = a;
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
    total = test::part1+test::part2+sports::score;
    student::put_number();
    test::put_marks();
    sports::put_score();
    cout<<"Total Score: "<< total << "\n";
}
int INTEL(){
    result student1;
    student1.get_number(1234);
    student1.get_marks(27.5,33.0);
    student1.get_score(6.0);
    student1.display();
    return 0;
}