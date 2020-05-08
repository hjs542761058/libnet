set(CMAKE_CXX_FLAGS "-std=c++0x ${cmake_cxx_flags}")

include_directories(../src)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

add_executable(cometclient_test cometclient_test.cpp)
target_link_libraries(cometclient_test tnet)
