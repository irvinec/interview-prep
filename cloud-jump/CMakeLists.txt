cmake_minimum_required(VERSION 3.3)

project(cloud-jump)

set(TEST_TARGET test_cloud_jump)
add_executable(${TEST_TARGET} cloud_jump.cpp test_cloud_jump.cpp)

find_package(Catch2 REQUIRED)

target_link_libraries(${TEST_TARGET} PRIVATE Catch2::Catch2)
target_include_directories(${TEST_TARGET} PRIVATE .)

enable_testing()
include(Catch)
include(ParseAndAddCatchTests)
ParseAndAddCatchTests(${TEST_TARGET})
