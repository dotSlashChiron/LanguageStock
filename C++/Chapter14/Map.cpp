#include <iostream>
#include <map>
#include <cstring>
typedef std::map<std::string, int> phoneMap;
int main()
{
    std::string name;
    int number;
    phoneMap phone;
    std::cout << "Enter three sets of name and numbers\n";
    for (int i = 0; i < 3; i++)
    {
        std::cin >> name;
        std::cin >> number;
        phone[name] = number;
    }
    phone["Jacob"] = 4444;
    phone.insert(std::pair<std::string, int>("Bose", 5555));
    int n = phone.size();
    std::cout << "\nSize of Map: " << n << "\n\n";
    std::cout << "List of Telephone Numbers \n";
    phoneMap::iterator p;
    for (p = phone.begin(); p != phone.end(); p++)
    {
        std::cout << (*p).first << " " << (*p).second << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter name: ";
    std::cin >> name;
    number = phone[name];
    std::cout << "Number: " << number << std::endl;
    return (0);
}