#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream input("./input.txt");
    ofstream output("./output.txt");

    // 按照单词进行读取
    string word;
    // while (input >> word){
    //     cout << word << endl;
    // }
    cout << "===============" << endl;

    // 逐行读取
    string line;
    while (getline(input, line)){
        output << line << endl;
    }

    // 逐字符读取
    // char ch;
    // while (input.get(ch)){
    //     cout << ch << endl;
    // }
}