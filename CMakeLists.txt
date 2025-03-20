cmake_minimum_required(VERSION 3.10)
project(KVPStorage)

set(CMAKE_CXX_STANDARD 17)

add_executable(KVPStorage src/main.cpp src/kvp_storage.cpp)
