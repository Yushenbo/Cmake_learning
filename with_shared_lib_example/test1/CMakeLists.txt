set(MODULE_NAME test1)

set(PUBLIC_HEADERS inc/test.hpp)
set(PRIVATE_FILES src/test.cpp)

add_library(${MODULE_NAME} SHARED ${PRIVATE_FILES} ${PUBLIC_HEADERS})
target_include_directories(${MODULE_NAME} PUBLIC inc)
target_compile_features(${MODULE_NAME} PUBLIC cxx_std_11)

target_link_libraries(${MODULE_NAME} 
    PUBLIC
)
