cmake_minimum_required(VERSION 3.16)

project(Viikko4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Viikko4 main.cpp
    asiakas.h asiakas.cpp
    pankkitili.h pankkitili.cpp
    luottotili.cpp
    luottotili.h)

include(GNUInstallDirs)
install(TARGETS Viikko4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
