cmake_minimum_required(VERSION 3.10)

set(PUBLIC_HEADERS inc/test.hpp)
set(PRIVATE_FILES
    src/test.cpp
)

project(Demo LANGUAGES CXX)

add_library(test1 STATIC ${PRIVATE_FILES} ${PUBLIC_HEADERS})
target_include_directories(test1 PUBLIC inc)
target_compile_features(test1 PUBLIC cxx_std_11)

add_executable(demo src/main.cpp)
target_link_libraries(demo
    PUBLIC
        test1
        pthread
)
