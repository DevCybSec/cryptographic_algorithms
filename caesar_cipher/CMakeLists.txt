cmake_minimum_required(VERSION 3.30)
project(caesar_cipher C)
include_directories(${PROJECT_SOURCE_DIR}/include)
set(CMAKE_C_STANDARD 11)
add_executable(caesar_cipher
        main.c
        src/caesar_cipher.c)
