#include <iostream>
#include <fstream>
#include <string>
class Abstract{
    public:
    std::string getOtherRole(std::string s){
        return s;
    }
    void showPosts(){
        char arrayofPosts[] = {'1',')',' ','B','o','s','s','\n','2',')',' ','M','a','n','a','g','e','r','\n','3',')',' ','O','t','h','e','r','\0'};
        for(int i=0;i<=sizeof(arrayofPosts);i++){
            std::cout<<arrayofPosts[i];
        }
    }
};
class Information{
    protected:
    int ID;
    std::string name;
    int postIndex;
    std::string otheremp;
    std::string address[2];
    std::string qualifications[5];
    Abstract a;
    public:
    void getID(){
        std::cout<<"Enter ID: ";
        std::cin>>ID;
        //Successful Message
        std::cout<<"ID Successfully Entered"<<std::endl;
        //send id to recieve.txt
        sendID();
    }
    void getName(){
        std::cout << "Enter your name: " << std::flush;
        // std::cin>>name;
        std::cin.ignore();
        std::getline(std::cin,name);
        std::cout<<"Name Recorded Successfully"<<std::endl;
        sendName();
    }
    
    void getPost(){
        std::cout<<std::endl;
        a.showPosts();
        std::cout<<std::endl;
        std::cout<<"What's your post? (Default 3): ";
        std::cin>>postIndex;
        if(postIndex==1){
            std::cout<<"Hey Boss! Welcome"<<std::endl;
        }else if(postIndex==2){
            std::cout<<"Hey Manager! Welcome"<<std::endl;
        }else{
            std::string otherEmployee;
            std::cout<<"Please specify your post: ";
            std::cin.ignore();
            std::getline(std::cin,otherEmployee);
            otheremp = a.getOtherRole(otherEmployee);
        }
        sendPost();
    }
    void getAddress(){
        std::string country;
        std::string state;
        std::cout<<"Enter Your Country Name: ";
        std::cin.ignore();
        std::getline(std::cin,country);
        address[0] = country;
        std::cout<<"Enter Your state in " << country << " : ";
        std::cin.ignore();
        std::getline(std::cin,state);
        address[1] = state;
        sendAddress();

    }
    void getQualifications(){
        bool tenth;
        char tenthc;
        std::cout<<"10th Done: ";
        std::cin>>tenthc;
        if(tenthc=='y'||tenthc=='Y'){
            tenth = true;
        }else{
            tenth = false;
        }
        bool twelth;
        char twelthc;
        std::cout<<"12th Done: ";
        std::cin>>twelthc;
        if(twelthc=='y'||twelthc=='Y'){
            twelth = true;
        }else{
            twelth = false;
        }
        bool btech;
        char btechc;
        std::cout<<"B.Tech Done: ";
        std::cin>>btechc;
        if(btechc=='y'||btechc=='Y'){
            btech = true;
        }else{
            btech = false;
        }
        bool mtech;
        char mtechc;
        std::cout<<"M.Tech Done: ";
        std::cin>>mtechc;
        if(mtechc=='y'||mtechc=='Y'){
            mtech = true;
        }else{
            mtech = false;
        }
        bool phd;
        char phdc;
        std::cout<<"PhD Done: ";
        std::cin>>phdc;
        if(phdc=='y'||phdc=='Y'){
            phd = true;
        }else{
            phd = false;
        }
        qualifications[0] = tenth ? "10th" : "";
        qualifications[1] = twelth ? "12th" : "";
        qualifications[2] = btech ? "B.Tech" : "";
        qualifications[3] = mtech ? "M.Tech" : "";
        qualifications[4] = phd ? "PhD" : "";
        sendQualifications();
    }
    void printID(){
        std::cout<<"ID: "<<ID<<std::endl;
    }
    void printName(){
        std::cout<<"Name: "<<name<<std::endl;
    }
    void printPost(){
        if(postIndex==1){
            std::cout<<"Post: Boss"<<std::endl;
        }else if(postIndex==2){
            std::cout<<"Post: Manager"<<std::endl;
        }else{
            std::cout<<"Post: "<<otheremp<<std::endl;
        }
    }
    void printAddress(){
        std::cout<<"Address: "<<address[0]<<", "<<address[1]<<std::endl;
    }
    void printQualifications(){
        std::cout<<"Qualifications: ";
        for(int i=0;i<5;i++){
            if(qualifications[i]!=""){
                std::cout<<qualifications[i]<<" ";
            }
        }
        std::cout<<std::endl;
    }
    void sendID(){
        std::ofstream outfile;
        outfile.open("recieve.txt");
        outfile<<"Employee ID is: "<<ID<<"\n"<<std::endl;
        outfile.close();
    }
    void sendName(){
        std::ofstream outfile;
        outfile.open("recieve.txt");
        outfile<<"Employee Name is: "<<name<<std::endl;
        outfile.close();
    }
    void sendPost(){
        std::ofstream outfile;
        outfile.open("recieve.txt");
        if(postIndex==1){
            outfile<<"Employee Post is: Boss"<<std::endl;
        }else if(postIndex==2){
            outfile<<"Employee Post is: Manager"<<std::endl;
        }else{
            outfile<<"Employee Post is: "<<otheremp<<std::endl;
        }
        outfile.close();
    }
    void sendAddress(){
        std::ofstream outfile;
        outfile.open("recieve.txt");
        outfile<<"Employee Address is: "<<address[0]<<", "<<address[1]<<std::endl;
        outfile.close();
    }
    void sendQualifications(){
        std::ofstream outfile;
        outfile.open("recieve.txt");
        outfile<<"Employee Qualifications are: ";
        for(int i=0;i<5;i++){
            if(qualifications[i]!=""){
                outfile<<qualifications[i]<<" ";
            }
        }
        outfile<<std::endl;
        outfile.close();
    }
};
int hemaheshvara(){
    Information i;
    i.getID();
    i.getName();
    i.getPost();
    i.getAddress();
    i.getQualifications();
    //Ask user whther he wants to print or not
    char print;
    std::cout<<"Do you want to print? (y/n): ";
    std::cin>>print;
    if(print=='y'||print=='Y'){
        i.printID();
        i.printName();
        i.printPost();
        i.printAddress();
        i.printQualifications();
    }else{
        std::cout<<"Thank you for using this program"<<std::endl;
    }
    return 0;
}