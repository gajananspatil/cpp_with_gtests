CMAKE_MINIMUM_REQUIRED(VERSION 3.8)
project(CPP_UNIT_TEST LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRE ON)
set(CMAKE_CXX_EXTENSION OFF)


enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
