#include <iostream>
#include <cstring>

// using namespace std;
class string{
    char *p;
    int len;
    public:
    string(){
        len = 0;
        p = 0;
    }
    string(const char* s); // create strings from arrays
    string(const string &s); // copy constructor
    ~string(){
        delete p;
    }
    // +operator
    friend string operator+(const string &s,const string &t);

    // <=string operator
    friend int operator<=(const string &s,const string &t);
    friend void show(const string s);
};
string::string(const char* s){
    len = strlen(s);
    p = new char[len+1];
    strcpy(p,s);
}
string::string(const string &s){
    len = s.len;
    p = new char[len+1];
    strcpy(p,s.p);
}
// Overloading +operator
string operator+(const string &s,const string &t){
    string temp; // create a temporary string
    temp.len = s.len + t.len; // set the length of the string
    temp.p = new char[temp.len+1]; // allocate memory for the string
    strcpy(temp.p,s.p); // copy the first string
    strcat(temp.p,t.p); // append the second string
    return(temp); // return the temporary string
}
// overloading <= operator
int operator<=(const string &s,const string &t){
    int m = strlen(s.p);
    int n = strlen(t.p);
    if(m<=n){
        return 1;
    }else return(0);
}
void show(const string s){
    std::cout<<s.p;
}
int maincarry(){
    string s1 = "New ";
    string s2 = "York";
    string s3 = "Delhi";
    string string1,string2,string3;
    string1 = s1; // calls the copy constructor
    string2 = s2; 
    string3 = s3;
    string3 = s1+s3;

    std::cout<<"\nstring1 = "; show(string1);
    std::cout<<"\nstring2 = "; show(string2);
    std::cout<<"\n";
    std::cout<<"\nstring3 = "; show(string3);
    std::cout<<"\n";
    if(string1<=string3){
        show(string1);
        std::cout<<"smaller than";
        show(string3);
        std::cout<<"\n";
}else{
        show(string3);
        std::cout<<"smaller than";
        show(string1);
        std::cout<<"\n";
}
    return 0;
}