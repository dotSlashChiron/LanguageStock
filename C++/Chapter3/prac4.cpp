#include <iostream>
using namespace std;
struct test
{
    short id;
    float marks;
    bool is_submitted;
    string studentFirstName;
};
void addline(void)
{
    cout << endl;
}
struct test Rohan, David, Smiths, Tony, Swift;
int maina()
{
    cout << "Program Started without any error..." << endl;
    cout << "Entered Main" << endl;
    addline();
    cout << "Assigning the value to the objects" << endl;
    David.id = 32;
    David.is_submitted = false;
    cout << "Assigning the valus to the objects completed " << endl;
    addline();
    cout << "Wrapping the objects in their associated variable" << endl;
    bool hasthisHumanSubmiited = David.is_submitted;
    short pp = David.id;
    cout << "Wrapped the objects in their associated variable " << endl;
    addline();
    cout << "Printing the sizes of the data_types (unsigned)" << endl;
    cout << "The size of a int is " << sizeof(int) << endl; // Prints : 4
    addline();
    cout << "Used variable in the struct " << endl;
    cout << "The size of a short is " << sizeof(short) << endl;
    cout << "The size of a float is " << sizeof(float) << endl;
    cout << "THe size of a bool is " << sizeof(bool) << endl;
    cout << "The size of string is " << sizeof(string) << endl;
    addline();
    //int pp = David.id; // In short value is assigned the size of int thus its 4;
    cout << "Printing the Bool with variable and without variable" << endl;
    cout << "Printing whether David submitted the assignment or not(with variable) " << hasthisHumanSubmiited << endl;
    cout << "Printing whether David submitted the assignment or not " << David.is_submitted << endl;
    cout << "Printing the size of bool of David " << sizeof(David.is_submitted) << endl;
    cout << "Printing the Bool with variable and without variable done" << endl;
    addline();
    cout << "Printing Davids Id size with and without variable" << endl;
    cout << "Printing the David IDs without assigning it into a data type: " << David.id << endl;
    cout << "Printing the David's ID size " << sizeof(pp) << endl;
    addline();
    cout << "The size of Davids ID is " << sizeof(pp) << endl;
    cout << "The size of Davids Bool is " << sizeof(hasthisHumanSubmiited) << endl;
    cout << endl;
    cout << "These are not assigned means no object is not created " << endl;
    cout << "The size of davids markks which is float " << David.marks << endl;
    cout << "The size of davids first name which is string " << sizeof(David.studentFirstName) << endl;
    addline();
    cout << "Printing the size of David " << sizeof(David) << endl;
    // cout << "Printing David " << David << endl; // Cannot be printed
    cout << "Printing Davids Id size with and withoput variable done " << endl;
    addline();
    cout << "Terminating the program" << endl;
    cout << "Program terminated without any error" << endl;
    return 0;
}