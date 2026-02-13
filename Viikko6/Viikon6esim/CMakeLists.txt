cmake_minimum_required(VERSION 3.16)

project(Viikon6esim LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Viikon6esim main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS Viikon6esim
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
