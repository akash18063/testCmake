cmake_minimum_required(VERSION 2.8)
project(testCmake)

add_library(library library.cpp)
add_executable(client client.cpp)

target_link_libraries(client library)
target_include_directories(client PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

#option(BP_BUILD_TESTS "Build tests" ON)
# if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BP_BUILD_TESTS)
#     enable_testing()
#     add_subdirectory(test)
# endif()