set(PICO_CYW43_ARCH_NONE 1)

add_executable(blink
    main.cpp
)

target_link_libraries(blink
    pico_stdlib
    pico_cyw43_arch_none
)

pico_add_extra_outputs(blink)
