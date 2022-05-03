cmake_minimum_required(VERSION 3.22)
project(PasswordGenerator VERSION 1.0.0)

set(PG_SOURCE "src/main.cpp")

add_executable(PasswordGenerator ${PG_SOURCE})

include_directories("include/")