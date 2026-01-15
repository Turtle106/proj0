include(FetchContent)
FetchContent_Declare(googletest URL https://github.com/google/googletest)
FetchContent_MakeAvailable(googletest)

add_executable(runTests portableTests.cpp)
target_link_libraries(runTests PRIVATE proj0_lib GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
