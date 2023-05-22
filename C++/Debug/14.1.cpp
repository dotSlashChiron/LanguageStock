#include <iostream>
#include <vector>
#include <cstring>
#define NAMESIZE 40
class EmployeeMaster
{
private:
    char name[NAMESIZE];
    int id;

public:
    EmployeeMaster()
    {
        std::strcpy(name, " ");
        id = 0;
    }
    EmployeeMaster(char name[NAMESIZE], int id) : id(id)
    {
        std::strcpy(this->name, name);
    }
    EmployeeMaster *getValuesFromUser()
    {
        EmployeeMaster *temp = new EmployeeMaster();
        std::cout << std::endl
                  << "Enter user name: ";
        std::cin >> temp->name;
        std::cout << std::endl
                  << "Enter user ID: ";
        std::cin >> temp->id;
        return temp;
    }
    void displayRecord()
    {
        std::cout << std::endl
                  << "Name = " << name;
        std::cout << std::endl
                  << "ID = " << id << std::endl;
    }
};
int main()
{
    std::vector<EmployeeMaster *> emp;
    EmployeeMaster *temp = new EmployeeMaster();
    emp.push_back(temp->getValuesFromUser());
    emp[0]->displayRecord();
    delete temp;

    temp = new EmployeeMaster("AlanKay", 3);
    emp.push_back(temp);
    emp[emp.capacity()]->displayRecord();
    emp[emp.size()]->displayRecord();
    return 0;
}