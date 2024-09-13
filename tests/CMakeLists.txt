
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)

FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)



add_executable(test_arithmatic test_arithmatic.cpp  
${PROJECT_SOURCE_DIR}/src/add.cpp
${PROJECT_SOURCE_DIR}/src/multiply.cpp
)
target_include_directories (test_arithmatic PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(test_arithmatic
PRIVATE
GTest::GTest
#Add
)

add_test(gtests_Arithmetics test_arithmatic)
