cmake_minimum_required(VERSION 3.10)

project(Demo LANGUAGES CXX)
add_subdirectory(test1)

target_compile_features(test1 PUBLIC cxx_std_11)

add_executable(demo main.cpp)
target_link_libraries(demo
    PUBLIC
        test1
        pthread
)
