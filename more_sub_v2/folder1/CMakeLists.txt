# 定义库目标
add_library(folder1_lib  A.cpp A.h)

#将 folder1 的当前源目录包含为公共目录，以便其他目标可以访问到 A.h 文件。# 链接 folder2 库与 folder1 库
target_include_directories(folder1_lib PUBLIC ${CMAKE_SOURCE_DIR}) 

target_link_libraries(folder1_lib PUBLIC folder2_lib)
