cmake_minimum_required(VERSION 2.8)
PROJECT(HELLO)
SET(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

##### lib
ADD_SUBDIRECTORY(src/api)

### main app
#ADD_SUBDIRECTORY(src/hello bin)
