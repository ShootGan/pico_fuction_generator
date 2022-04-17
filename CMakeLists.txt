# Set minimum required version of Cmake
cmake_minimum_required(VERSION 3.12)

# Include build fuctions from Pico SDK
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

# Set name of projects (as PROJECT_NAME) and C/C++ standards
project(pico_function_generator C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Create a pico-sdk subdirectory for librarys
pico_sdk_init()

#tell cmake whe to find executable
add_exccutable(${PROJECT_NAME}
    main.c
)

pico_add_extra_options(${PROJECT_NAME)

target_link_libraries(${PROJECT_NAME}
    pico_stdlib
)