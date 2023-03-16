#include <iostream>
using namespace std;
void f(int &a)
{
  a = a + 10;
}
int mainx()
{
  // In this case total and sum are likely the same variable
  // Sum is an alternative for total
  float total = 100;
  float &sum = total;
  float &totalsum = total;

  cout << "The value of total is " << total << endl;       // Prints 100
  cout << "The value of sum is " << sum << endl;           // Prints 100
  cout << "The value of totalsum is " << totalsum << endl; // Prints 100

  int n[10] = {1, 2, 3, 4, 5, 6, 7, 34, 9, 10};
  int &x = n[8];
  cout << "The value of n[8] -> " << n[8] << endl;
  cout << "The value of x is -> " << x << endl;
  for (auto i : n)
  {
    cout << i << " ";
  }
  cout << endl;
  int ex = 23;
  int *p = &ex;
  int &m = *p;
  cout << "x -> " << ex << endl;
  cout << "*p -> " << p << endl;
  cout << "M -> " << m << endl;
  cout << "&ex -> " << &ex << endl;
  int h = 10;
  f(h);
  cout << "m -> " << h << endl;

  return 0;
}

/*
-> Reference Variables are the same name of a single variable. For example your name is Rishabh & Rishu and & Rishnu & Ripu also
-> So whenever we will try to call a variable with anyone of this name Rishabh will be called.
-> data-type & reference-name = variable-name
-> A reference variable must be intialized at the time of declaration (Here: total was initialized by 100);
-> Initializing the variable establishes the correspondence between the reference and the data object which it names; 
-> & is not an address operator in this case. It is a reference to the origin variable (that is float here);
*/