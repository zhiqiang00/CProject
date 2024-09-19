#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 3, 8, 1, 2, 9, 7, 6, 4, 0};

    // 对前5个元素进行排序
    std::partial_sort(vec.begin(), vec.begin() + 5, vec.end());

    // 输出排序结果
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
