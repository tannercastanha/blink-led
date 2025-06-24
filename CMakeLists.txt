cmake_minimum_required(VERSION 3.13)
# Tell CMake where the SDK and toolchain are
set(PICO_SDK_PATH "C:/Users/tcast/pico-projects/pico-sdk")
set(PICO_TOOLCHAIN_PATH "C:/tools/Arm GNU Toolchain arm-none-eabi/14.2 rel1")
# Force use of ARM GCC, not MSVC
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_VERSION 1)
set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER arm-none-eabi-g++)
set(CMAKE_ASM_COMPILER arm-none-eabi-gcc)
# Bring in the Pico SDK
include(pico_sdk_import.cmake)
project(blink-led)
pico_sdk_init()
add_subdirectory(blink)
