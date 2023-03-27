project(ReactNativeBLS)
cmake_minimum_required(VERSION 3.4.1)

# set (CMAKE_VERBOSE_MAKEFILE ON)
# set (CMAKE_CXX_STANDARD 11)
set (PACKAGE_NAME "react-native-bls-signatures")
set (BUILD_DIR ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 17)

# add_subdirectory(../bls-signatures-1.0.16)
# target_link_libraries(cpp PRIVATE ../bls-signatures)

# Specifies a path to native header files.
include_directories(
            ../bls-signatures-1.0.16
            ../cpp
)

add_subdirectory(../bls-signatures-1.0.16 bls)
# add_subdirectory(../bls-signatures-1.0.16/src bls)

add_library(cpp
            SHARED
            src/main/cpp/cpp-adapter.cpp
            ../cpp/react-native-bls-signatures.cpp
            # cpp-adapter.cpp
)

set_target_properties(
        cpp PROPERTIES
        CXX_STANDARD 17
        CXX_EXTENSIONS OFF
        POSITION_INDEPENDENT_CODE ON
)


# find_package(ReactAndroid REQUIRED CONFIG)
# find_library(log-lib log)

target_link_libraries(
        cpp
        bls                # <-- MMKV core
        # ${log-lib}          # <-- Logcat logger
        # ReactAndroid::jsi   # <-- JSI
        # android             # <-- Android JNI core
)
