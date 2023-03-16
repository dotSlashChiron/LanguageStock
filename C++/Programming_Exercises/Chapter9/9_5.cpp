#include <iostream>
#include <vector>
#include <algorithm>
int count = 0;
std::vector <int> arr;
void get_arr(){       
    int x;
    std::cout << "Enter integer " << count << " : ";
    std::cin >> x;
    arr.push_back(x);
    count++; 
    std::cout << "Do you want to enter another integer? (y/n) ";
    char c;
    std::cin >> c;
    if(c == 'y'){
        get_arr();
    }
}
void sort_arr(){
    std::sort(arr.begin(),arr.end()); 
}
void display_arr(){
    for(int i=0;i<count;i++){
        std::cout << arr[i] << " ";
    }
}
int main(){
    get_arr();
    std::cout << "Array before sorting : ";
    display_arr();
    sort_arr();
    std::cout << "\nArray after sorting : ";
    display_arr();
}