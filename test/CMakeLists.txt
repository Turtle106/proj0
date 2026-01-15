include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0
    DOWNLOAD_EXTRACT_TIMESTAMP ON
)
FetchContent_MakeAvailable(googletest)

add_executable(runTests portableTests.cpp)
target_link_libraries(runTests PRIVATE proj0_lib GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
