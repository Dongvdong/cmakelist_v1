
// 直接路径 没有经过 target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR})
#include "folder1/A.h"
#include "folder2/B.h"

int main() {
    A a;
    B b;

    // 调用 A 类的函数
    a.doSomething();

    // 调用 B 类的函数
    b.performAction();

    return 0;
}
