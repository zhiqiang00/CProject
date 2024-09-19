#include <iostream>
using namespace std;

int main(){
    cout << "输入一个num:" << endl;

    int num;
    cin >> num;
    bool re = true;
    int i = 2;
    while (i < num){
        if (num % i == 0){
            re = false;
            break;
        }
        i++;
    }
    if (re){
        cout << num << "是质数！" << endl; 
    }else {
        cout << num << "不是质数！" << endl;
    }
}