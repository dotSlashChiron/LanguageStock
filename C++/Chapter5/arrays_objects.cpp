#include <iostream>
class employee
{
    char name[30];
    float age;
    public:
    void getData(void);
    void putData(void);
};
int mainee(){
    employee manager[3]; //* Here we have created an array of object of class employee and other types
    employee foreman[15];
    employee worker[75];
    manager[1].putData();
}