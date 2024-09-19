#include <iostream>
using  namespace std;

int main(){
    // if(1) {
    //     std::cout << "hello world!" << std::endl;
    // } else {
    //     std::cout << "不符合条件" << std::endl;
    // };
    // int a = 20;
    // cout << "a的长度为：" << sizeof a << endl;

    // int i = 0;
    // 1 < 2 && i++;
    // cout << "i = " << i << endl;

    // char ch;    //定义一个字符变量
    // int number; //定义一个整型变量
    // cout << "Enter a number: ";
    // cin >> number;   // 读取整数
    // cout << "Enter a character: ";
    // ch = cin.get() ;   // 读取字符
    // cout << "Thank You!\n";
    // ch = cin.get();
    // char s = 'A';
    // switch (s){
    //     case 'A':
    //         cout << "成绩好" << endl;
    //         break;
    //     default:
    //         cout << 'fail' << endl;
    // }
    // int a = 10;

    // do {
    //     cout << "a 的数值：" << a << endl;
    //     a += 1;
    // }while (a < 20);
    // for (int i = 0; i < 10; i++){
    //     cout << i << endl;
    // }

    // for (int n : {1,2,3,4}){
    //     cout << n << endl;
    // }

    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= i; j ++){
            cout << j << "X" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }
    
    string name;
} 