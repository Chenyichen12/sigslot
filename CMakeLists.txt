cmake_minimum_required(VERSION 3.28)

project(pal_sigslot VERSION 1.2.3 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(sigslot)


target_sources(
    sigslot
    PUBLIC
        FILE_SET cxx_modules TYPE CXX_MODULES FILES
            include/sigslot/signal.ixx
)

add_subdirectory(example)