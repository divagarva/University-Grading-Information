cmake_minimum_required(VERSION 3.27)
project(University_Grading_Information C)

set(CMAKE_C_STANDARD 11)

add_executable(University_Grading_Information main.c
        Student.h
        Student.c)
