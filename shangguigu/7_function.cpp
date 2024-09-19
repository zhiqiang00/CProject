#include <iostream>
using namespace std;

int square(int x){
    return x * x;
}

// int main(){
//     int tags_bit = 5; // 二进制 0000...0101
//     int n = 2;
//     bool is_set = tags_bit & (1 << n); // 检查第 2 位

//     if (is_set) {
//         std::cout << "第 " << n << " 位被设置为 1" << std::endl;
//     } else {
//         std::cout << "第 " << n << " 位未被设置为 1" << std::endl;
//     }

// }



int main() {
    cout << (17 & (1<<17)) << endl;
}
