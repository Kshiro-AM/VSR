cmake_minimum_required(VERSION 3.27.4)

# enable vcpkg
set(
    vcpkg_path
    "D:/dev/vcpkg"
)
set(
    CMAKE_TOOLCHAIN_FILE 
    "${vcpkg_path}/scripts/buildsystems/vcpkg.cmake"
    CACHE STRING "Vcpkg toolchain file"
)

project(
    VSR
    LANGUAGES CXX C
)

# set variables
set(VSR_name VSR) 

add_subdirectory(VSR)
