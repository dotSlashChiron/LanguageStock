#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int i,j;
    char str[] = "\nC++ is better than C";
    int len = strlen(str);
    cout << "The length of the string is: " << len << "\n";
    char *substr = new char[len];
    cout << "The main string is : " << str;
    cout << "\n\nEnter the substring to be searched: ";
    cin >> substr;

    int k, len2=strlen(substr);
    cout << "Length of substring is: " << len2 << "\n";
    for(i=0;i<len;i++){
        k=i;
        for(j=0;j<len2;j++){
            if(str[k]==substr[j]){
                if(j==len2-1){ 
                    cout << "Substring found at index: " << i << "\n";
                    exit(0);
                }k++;
            }else
                break;
        }
    }
    if(i==len){
        cout << "Substring not found!\n";
    }
}