# 定义库目标
add_library(folder2_lib STATIC B.cpp B.h)

# 设置库的公共头文件路径
target_include_directories(folder2_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
