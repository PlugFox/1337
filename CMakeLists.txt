cmake_minimum_required(VERSION 3.16)

#set(MY_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/build")
#if(NOT EXISTS ${MY_DIRECTORY})
#    file(MAKE_DIRECTORY ${MY_DIRECTORY})
#endif()

project(main C)

set(CMAKE_C_COMPILER clang)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

#include_directories(include)
#add_executable(main bin/main.c lib/src/sum.c)

add_library(main-lib STATIC lib/src/sum.c)
target_include_directories(main-lib PUBLIC lib)

target_compile_options(main-lib PRIVATE
  -fcolor-diagnostics
  -fansi-escape-codes
  -std=c17
)


if(CMAKE_BUILD_TYPE STREQUAL "Debug")
  target_compile_options(main-lib PRIVATE
    -O0
    -g
  )
else()
  target_compile_options(main-lib PRIVATE
    -O3
    -Wall
    -Wextra
    -pedantic
    -Werror
  )
endif()


add_executable(main bin/main.c)
target_link_libraries(main main-lib)

target_link_libraries(main main-lib)

#find_package(Threads REQUIRED)

# Testing:
add_executable(test_runner test/test_runner.c test/unity/unity.c)
target_link_libraries(test_runner main-lib ${CMAKE_THREAD_LIBS_INIT})
enable_testing()
add_test(NAME test_runner COMMAND test_runner)