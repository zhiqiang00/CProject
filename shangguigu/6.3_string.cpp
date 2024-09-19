#include <string>
#include <iostream>
using namespace std;

int main(){
    string a = "abcde";
    char b[] = {'a', 'b', 'c'};
    char c[] = "abcde";
    cout << sizeof a << endl;
    cout << sizeof b << endl;
    cout << sizeof c << endl;
}