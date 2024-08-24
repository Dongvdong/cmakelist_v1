# 创建 folder3 的可执行文件（假设 C.cpp 是主函数）
add_executable(main C.cpp)


message(STATUS "项目根目录: " ${CMAKE_SOURCE_DIR})
 
# 指定 main 可执行文件的包含目录，包括根目录${CMAKE_SOURCE_DIR} （ folder1 和 folder2 目录）
target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR})

# 链接 main 与 folder1_lib 和 folder2_lib（假设 C.cpp 使用了 folder1 中的 A 和 folder2 中的 B）
target_link_libraries(main PRIVATE folder1_lib folder2_lib)

