cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(
        template
        VERSION 0.0.0
        LANGUAGES C
)

# Specify the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Set compiler flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror -pedantic -Wno-unused-parameter -Wshadow")

# Define source files
set(SRC
        lib/ds.c
        src/main.c
)

# Define include directories
include_directories(include lib/log/src)

# Add the executable
add_executable(${PROJECT_NAME} ${SRC})

# Add a custom target for the 'run' command
add_custom_target(run
        COMMAND ${PROJECT_NAME}
        DEPENDS ${PROJECT_NAME}
        WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)

# Add a custom target for the 'clean' command
add_custom_target(clean
        COMMAND ${CMAKE_COMMAND} -P ${CMAKE_BINARY_DIR}/cmake_clean.cmake
)

# Generate a script to clean build files
file(WRITE ${CMAKE_BINARY_DIR}/cmake_clean.cmake
        "file(GLOB_RECURSE files_to_remove RELATIVE \${CMAKE_BINARY_DIR} * .o)
foreach(file \${files_to_remove})
    file(REMOVE \${CMAKE_BINARY_DIR}/\${file})
endforeach()
file(REMOVE ${PROJECT_NAME})
")
