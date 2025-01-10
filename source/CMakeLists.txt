cmake_minimum_required(VERSION 3.27)

project(login C)

# Making sure to use GLIBC
if (NOT CMAKE_COMPILER_IS_GNUCC)
    message(FATAL_ERROR "Glibc not found. Aborting.")
endif()

# Set build type to Release
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Disable stack protections
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fno-stack-protector -O3 -Wall -Wextra")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -z noexecstack")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D_FORTIFY_SOURCE=0")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_FORTIFY_SOURCE=0")

# Disable PIE (Position Independent Executable) to prevent ASLR
set(CMAKE_POSITION_INDEPENDENT_CODE OFF)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -no-pie")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fno-pic")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-pic")

# Disable compiler optimizations (optional, based on your configuration)
set(CMAKE_C_FLAGS_RELEASE "-O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O0")

# Disable debugging symbols
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -s")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -s")

# Setting CMAKE_C_STANDARD
set(CMAKE_C_STANDARD 11)

# Add first executable version (with USE_DUMMY_PASSWORD)
add_executable(login-using-dummy-password code/login.c)
target_compile_definitions(login-using-dummy-password PRIVATE USE_DUMMY_PASSWORD)

# Add second executable version (with USE_REAL_PASSWORD)
add_executable(login code/login.c)
target_compile_definitions(login PRIVATE USE_REAL_PASSWORD)