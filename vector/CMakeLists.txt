cmake_minimum_required(VERSION 3.3)

project(problem)

set(TEST_TARGET tests)
add_executable(${TEST_TARGET} tests.cpp)

find_package(Catch2 REQUIRED)

target_link_libraries(${TEST_TARGET} PRIVATE Catch2::Catch2)
target_include_directories(${TEST_TARGET} PRIVATE .)

target_compile_features(${TEST_TARGET} PRIVATE cxx_std_17)

enable_testing()
include(Catch)
include(ParseAndAddCatchTests)
ParseAndAddCatchTests(${TEST_TARGET})
