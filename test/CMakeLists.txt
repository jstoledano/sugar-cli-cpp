enable_testing()

add_executable(run_tests test_conversion.cpp)

target_link_libraries(run_tests PRIVATE sugar_cli_core GTest::gtest_main)
target_include_directories(run_tests PRIVATE ${CMAKE_SOURCE_DIR}/src/include)

include(GoogleTest)
gtest_discover_tests(run_tests)