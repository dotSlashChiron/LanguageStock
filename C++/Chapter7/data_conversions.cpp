#include <iostream>
using namespace std;
class invent2; //destination class declared

class invent1
{
    int code;    // item code
    int items;   //no. of items
    float price; //cost of each item
public:
    invent1(int a, int b, float c)
    {
        code = a;
        items = b;
        price = c;
    }
    void putData(){
        std::cout << "Code: " << code << "\n";
        std::cout << "Items: " << items << "\n";
        std::cout << "Value: " << price << "\n";
    }
    int getcode(){
        return code;
    }
    int getItems(){
        return items;
    }
    float getprice(){
        return price;
    }
    operator float(){
        return(items*price);
    }
};
class invent2{
    int code;
    float value;
    public:
    invent2(){
        code = 0;
        value = 0;
    }
    invent2(int x,int y){
        code = x;
        value = y;
    }
    void putData(){
        std::cout<<"Code: " << code << std::endl;
        std::cout<<"Value: "<<value << std::endl;
    }
    invent2(invent1 p){
        code = p.getcode();
        value = p.getItems()*p.getprice();
    }
};
int mainyes(){
    invent1 s1(100,5,140.0);
    invent2 d1;
    float total_value;

    /*! invent 1 to float*/
    total_value = s1;

    // Invent 1 to invent2 
    d1 = s1; // this calls the constructor of invent2 class that is taking invent1 as argument

    std::cout << "Product Details - invent1 type" << std::endl;
    s1.putData();
    std::cout<<"\n Stock Value \n";
    std::cout<<"Value = " << total_value << "\n\n";
    std::cout << "Product details invent2 type" << "\n";
    d1.putData();
}