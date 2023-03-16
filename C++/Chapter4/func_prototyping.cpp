#include <iostream>
using namespace std;
float volume(int x,float y,float z) {
   return x*y*z;
}
int mainxfa(){
      int b1 = 1;
      float b2 = 3.2;
      float b3 = 4.2;
      float cube1 = volume(b1,b2,b3);
      cout << cube1 << endl;
}