enable_testing()
find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME}_test example.cpp)
target_link_libraries(${PROJECT_NAME}_test GTest::gtest GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_test)
