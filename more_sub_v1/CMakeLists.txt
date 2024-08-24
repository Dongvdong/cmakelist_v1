cmake_minimum_required(VERSION 3.5)
project(MyProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectories
add_subdirectory(folder1)
add_subdirectory(folder2)


# Main executable
add_executable(main main.cpp)

target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR}) # 避免相对路径使用 但是main本来就是相对路径

# Link main executable with folder1_lib and folder2_lib
target_link_libraries(main PRIVATE folder1_lib folder2_lib)

