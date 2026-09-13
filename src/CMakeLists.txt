add_library(work STATIC work.cpp)
target_include_directories(work PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(kawpow-kernel main.cpp)
target_link_libraries(kawpow-kernel PRIVATE work)
