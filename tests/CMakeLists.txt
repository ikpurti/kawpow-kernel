add_executable(kawpow-kernel_tests test_core.cpp)
target_link_libraries(kawpow-kernel_tests PRIVATE work)
target_include_directories(kawpow-kernel_tests PRIVATE ${CMAKE_SOURCE_DIR}/include)
add_test(NAME core COMMAND kawpow-kernel_tests)
