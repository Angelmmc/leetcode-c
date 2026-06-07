cmake_minimum_required(VERSION 4.2)
project(leetcode_c C)

set(CMAKE_C_STANDARD 23)

add_executable(leetcode_c main.c
        medium/ProductOfArrayExceptSelf.c
        medium/ProductOfArrayExceptSelf.h
)
