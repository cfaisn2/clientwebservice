set(CMAKE_AUTOMOC ON)
cmake_minimum_required(VERSION 3.15)
project(qtclientwebservice)

set(CMAKE_CXX_STANDARD 14)
find_package(Qt5Widgets)
find_package(Qt5Network)
SET(QT_USE_QTNETWORK true)
INCLUDE_DIRECTORIES(${QT_QTNETWORK_INCLUDE_DIR})


add_executable(qtclientwebservice main.cpp ClientRest.cpp ClientRest.h)
target_link_libraries(qtclientwebservice Qt5::Widgets Qt5::Network)
