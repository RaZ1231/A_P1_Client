cmake_minimum_required(VERSION 3.6)
project(A_P1_Client)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")


set(BOOST_ROOT CACHE PATH "/usr/include/boost/")
find_package(Boost 1.58.0 COMPONENTS serialization system)
include_directories(${Boost_INCLUDE_DIR})


set(SOURCE_FILES src/main.cpp src/sockets/Socket.cpp src/sockets/Socket.h src/sockets/Udp.cpp
        src/sockets/Udp.h src/Point.cpp src/Point.h src/sockets/Connection.cpp src/sockets/Connection.h)

add_executable(A_P1_Client ${SOURCE_FILES})

target_link_libraries(A_P1_Client ${Boost_LIBRARIES})