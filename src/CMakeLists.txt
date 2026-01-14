add_library(proj0_lib Main.cpp)
target_include_directories(proj0_lib PUBLIC ${PROJECT_SOURCE_DIR}/inc)

add_executable(proj0 Main.cpp)
target_link_libraries(proj0 PRIVATE proj0_lib)
