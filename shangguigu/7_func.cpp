// #include <time.h>
// #include <iostream>
// #include <ctime>
// #include <cstdlib>

// using namespace std;

// int main ()
// {
//    int i,j;

//    // 设置种子
//    srand( (unsigned)time( NULL ) );

//    /* 生成 10 个随机数 */
//    for(i = 0; i < 10; i++) {
//       // 生成实际的随机数
//       j= rand();
//       cout << "random " << j % 10 << endl;
//    }
//     getchar();  
//     return 0;  
// }

#include <iostream>
#include <random>

int main() {
    // 创建随机数生成器
    std::random_device rd;  // 获取随机数种子
    std::mt19937 gen(rd()); // 使用梅森旋转算法生成随机数
    std::uniform_real_distribution<> dis(0.0, 1.0); // 定义均匀分布范围 [0, 1)

    // 生成随机数
    double random_number = dis(gen);
    
    // 输出随机数
    std::cout << "随机生成的数: " << random_number << std::endl;

    return 0;
}
