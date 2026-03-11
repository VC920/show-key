cmake_minimum_required(VERSION 3.10)
project(show-key)
add_executable(${PROJECT_NAME} WIN32 main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include)
target_link_directories(${PROJECT_NAME} PRIVATE lib)
target_link_libraries(${PROJECT_NAME} PRIVATE raylibdll)