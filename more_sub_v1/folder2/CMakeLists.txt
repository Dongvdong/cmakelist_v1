# Create a library for folder2 (assuming B.cpp is compiled into a library)
add_library(folder2_lib B.cpp B.h)

# Set include directories for folder2 (optional, if needed)
target_include_directories(folder2_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
