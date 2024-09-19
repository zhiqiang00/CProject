#include <iostream>
#include <vector>
#include <memory>  // 用于 std::unique_ptr

// 假设有一个 Ranker 类
class Ranker {
public:
    void Init(int context) {
        std::cout << "Initializing with context: " << context << std::endl;
    }
};

int main() {
    std::vector<std::unique_ptr<Ranker> > xxrankers_;  // 创建一个容器，包含 Ranker 对象的智能指针

    // 向容器中添加几个 Ranker 对象
    xxrankers_.emplace_back(std::make_unique<Ranker>());
    xxrankers_.emplace_back(std::make_unique<Ranker>());

    int slide_contextxxx = 42;  // 定义一个上下文变量

    // 遍历容器并调用每个 Ranker 对象的 Init 成员函数
    for (auto &xxranker : xxrankers_) {
        xxranker->Init(slide_contextxxx);
    }

    return 0;
}
