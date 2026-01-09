cmake_minimum_required(VERSION 3.16)

project(OOhjelmointiviikko1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(OOhjelmointiviikko1 main.cpp)

include(GNUInstallDirs)
install(TARGETS OOhjelmointiviikko1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
