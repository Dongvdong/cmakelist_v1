

/*
//#include "../folder1/A.h"
//#include "../folder2/B.h"

 target_include_directories 指令并指定了包含目录后，
 确实可以直接使用 #include "folder1/A.h" 和 #include "folder2/B.h"，
 而不必使用相对路径 ../folder1/A.h 和 ../folder2/B.h。
 这是因为 target_include_directories 指定了编译器在编译时查找头文件的路径，
 使得编译器可以在指定的包含目录中找到这些头文件。

 */

#include "folder1/A.h"
#include "folder2/B.h"


class C {
public:
    void run();
};


void C::run() {
    A a;
    B b;

    a.doSomething();
    b.performAction();
}

int main() {
    C c;
    c.run();
    return 0;
}
