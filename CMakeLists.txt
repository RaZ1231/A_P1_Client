cmake_minimum_required(VERSION 3.6)
project(A_P1_Client)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

set(SOURCE_FILES src/main.cpp src/sockets/Socket.cpp src/sockets/Socket.h src/sockets/Udp.cpp
        src/sockets/Udp.h)

add_executable(A_P1_Client ${SOURCE_FILES})

# add_subdirectory(lib/googletest-master)

# include_directories(lib/googletest-master/googletest/include)

# include_directories(lib/googletest-master/googlemock/include)

# target_link_libraries(A_P1_Client gtest gtest_main)