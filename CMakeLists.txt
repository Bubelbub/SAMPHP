project(samphp)

cmake_minimum_required(VERSION 2.8)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

include_directories(./libs/php)
include_directories(./libs/php/Zend)
include_directories(./libs/php/TSRM)
include_directories(./libs/php/main)
include_directories(./libs/php/sapi/embed)
include_directories(./src)
include_directories(./libs/zeex)

if(MSVC)
  add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

add_subdirectory(src)
