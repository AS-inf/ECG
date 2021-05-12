cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)

project(ECG VERSION 0.1)

set(PROJECT_SOURCE_DIR src)
configure_file(src/ver.h.in ver.h)


add_executable(ECG src/main.cpp src/EcgReader.cpp src/globals.cpp  src/DataProcessingSystem.cpp src/Memory.cpp src/ForwardProcessingStep.cpp)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(ECG PRIVATE Threads::Threads)


target_link_libraries(ECG PUBLIC ${EXTRA_LIBS})
target_include_directories(ECG PUBLIC "${PROJECT_BINARY_DIR}" ${EXTRA_INCLUDES})


set(CMAKE_CXX_FLAGS "-O3")
