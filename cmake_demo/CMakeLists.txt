CMAKE_MINIMUM_REQUIRED(VERSION 3.0.0)
add_compile_options(-Wall)

PROJECT(TEST_PROJECT VERSION 1.0.0 DESCRIPTION "Simple hello world C Program")

message("Using compiler: ${CMAKE_C_COMPILER_ID}")
message("Version: ${CMAKE_C_COMPILER_VERSION}")

add_executable(
    TestApp
    main.c
    main.h
)