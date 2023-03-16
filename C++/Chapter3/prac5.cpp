#include <iostream>
using namespace std;
enum shape{
    circle,square,triangle
};
enum color{
    red,blue,green,yellow
};
enum position{
    off,on
};
int maina(){
    shape  ellipse;
    color background;
    color background = blue;
   // color background = 7; // Error in C++ because in C++ does not permit any int value to be automatically converted to enum value
    color background = (color)7; //But a enum can be converted into a int by casting 
    int c = red; // Red is in enum color and enum can be placed in value of an int value
    return 0;
}
/*
- Enums are by default initialized with 0 integer
- For overrding the default integer value in enums follow the below syntax
enum color{
    red,green = 4,blue = 5
}; 
- Over here green and blue are initialized with 4 and 5 except red which is by default 0
- The subsequent intialized enumerators are larger by 1 than their predecessors.
- Enums can be created without any tag names
- Enumerators are terminated with an semicolon just like the classes
- Remember
enum color{
    blue,green,red;
};
// Untill any of its variable or components or colors are not intialized this will be their initliazing value
 blue = 0 , green = 1, red = 2 


*/