cmake_minimum_required(VERSION 3.10)
project(sugar_cli_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.12.1
)
FetchContent_MakeAvailable(googletest)

add_library(sugar_cli_core STATIC src/conversion.cpp)
target_include_directories(sugar_cli_core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/include)

add_executable(sugar-cli-cpp src/main.cpp)
target_link_libraries(sugar-cli-cpp PRIVATE sugar_cli_core)

add_subdirectory(test)