cmake_minimum_required(VERSION 3.16)

project(Viikko2teht LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Viikko2teht main.cpp
    game.h game.cpp)

include(GNUInstallDirs)
install(TARGETS Viikko2teht
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
