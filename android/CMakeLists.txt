project(ReactNativeBLS)
cmake_minimum_required(VERSION 3.4.1)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 11)

# add_subdirectory(../bls-signatures-1.0.16)
# target_link_libraries(cpp PRIVATE ../bls-signatures)

add_library(cpp
            SHARED
            src/main/cpp/cpp-adapter.cpp
            ../cpp/react-native-bls-signatures.cpp
            # cpp-adapter.cpp
)

# Specifies a path to native header files.
include_directories(
            ../cpp
)
