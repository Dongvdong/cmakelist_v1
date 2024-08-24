#ifndef A_H
#define A_H

#include <iostream>


//#include "../folder2/B.h" // 正常情况
//# 包含根目录 A.h可以直接引用 B.h
//target_include_directories(folder1_lib PUBLIC ${CMAKE_SOURCE_DIR})
#include "folder2/B.h" // 特殊情况

class A {
public:
    void doSomething();
};

#endif // A_H
