# Create a library for folder1 (assuming A.cpp is compiled into a library)
add_library(folder1_lib A.cpp A.h)

# 包含根目录 A.h可以直接引用 B.h
target_include_directories(folder1_lib PUBLIC ${CMAKE_SOURCE_DIR})

# Link folder1_lib with folder2_lib (assuming it uses B from folder2)
target_link_libraries(folder1_lib PUBLIC folder2_lib)
