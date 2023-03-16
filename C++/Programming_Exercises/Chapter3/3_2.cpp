#include <iostream>
#include <vector>
using namespace std;
int tharabhaimain(){
    int size;
    cout << "Enter a size of the vector: ";
    cin >> size;
    vector <int> vec;
    vec.resize(size);
    for (int i:vec)
    {
       cout << i << " " ;
    }cout << endl;
    
    return 0;
}