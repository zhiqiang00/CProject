#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(43);
    
    for (int num : v1){
        cout << num << endl;
    }
}