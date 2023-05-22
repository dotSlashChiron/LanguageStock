#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator p;
    for (p = lst.begin(); p != lst.end(); ++p)
    {
        cout << *p << ", ";
    }
    cout << "\n\n";
}
int main()
{
    list<int> list1;
    list<int> list2(5);
    for (int i = 0; i < 3; i++)
        list1.push_back(rand() / 100);
    list<int>::iterator p;
    for (p = list2.begin(); p != list2.end(); ++p)
        *p = rand() / 100;
    cout << "List 1 \n";
    display(list1);
    cout << "List 2 \n";
    display(list2);

    list1.push_front(100);
    list2.push_back(200);

    list2.pop_front();
    cout << "List 1\n";
    display(list1);
    cout << "Now List 2\n";
    display(list2);
    list<int> listA, listB;
    listA = list1;
    listB = list2;
    list1.merge(list2);
    cout << "Merged Unsorted Lists";
    display(list1);

    listA.sort();
    listB.sort();
    listA.merge(listB);
    cout << "Merged Sort List \n";
    display(listA);
    listA.reverse();
    cout << "Display Reversed Merge List \n";
    display(listA);
    return 0;
}