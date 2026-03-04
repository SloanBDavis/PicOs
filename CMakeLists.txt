cmake_minimum_required(VERSION 3.13)

# Pull in the Pico SDK (must be before project())
include(pico_sdk_import.cmake)

project(picos C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the Pico SDK
pico_sdk_init()

# -----------------------------------------------------------------------------
# PicOs RTOS
# -----------------------------------------------------------------------------
# Phase 1: Bare-metal blinky (direct register access, no HAL)
# As you progress through phases, add new source files here.

add_executable(picos
    src/main.c

    # -- Kernel (uncomment as you implement each phase) --
    # src/kernel/task.c
    # src/kernel/scheduler.c
    # src/kernel/context_switch.S
    # src/kernel/tick.c
    # src/kernel/semaphore.c
    # src/kernel/mutex.c
    # src/kernel/queue.c
    # src/kernel/idle.c

    # -- Drivers (uncomment as needed) --
    # src/drivers/uart.c
    # src/drivers/gpio.c
)

target_include_directories(picos PRIVATE
    src/
    src/kernel/
    src/drivers/
)

# Link the Pico SDK (provides startup code, linker script, clock init)
# hardware_base gives us register address definitions
target_link_libraries(picos
    pico_stdlib
)

# Generate .uf2, .bin, .hex, .dis outputs
pico_add_extra_outputs(picos)

# Enable UART stdio (GP0=TX, GP1=RX) for debug output
pico_enable_stdio_uart(picos 1)
pico_enable_stdio_usb(picos 0)
