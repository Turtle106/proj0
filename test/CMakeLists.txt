include(FetchContent)
FetchContent_Declare(googletest URL https://github.com/google/googletest)
FetchContent_MakeAvailable(googletest)

add_subdirectory(googletest)

add_executable(runTests portableTests.cpp)
target_link_libraries(proj0_tests PRIVATE proj0_lib GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(proj0_tests)
