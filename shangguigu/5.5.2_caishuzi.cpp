#include <iostream>
using namespace std;
int main(){
    cout << "=============猜数字=============" << endl;
    //生成随机数
    srand(time(0));
    int target = rand() % 100;
    int n = 0;
    while(n < 5){
        cout << "输入0-100数字" << endl;

        int num;
        cin >> num;
        if (num == target){
            cout << "对了" << num << endl;
            break;
        }else if (num > target){
            cout << "大了" << num << endl; 
        }else{
            cout << "小了" << num << endl;
        }
    }

    if (n == 5){
        cout << "到次数了" << n << endl;
    }

}