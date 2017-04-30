SET(LIBHELLO_SRC helloapi.cpp)

###编译动态库 so文件
ADD_LIBRARY(helloapi SHARED ${LIBHELLO_SRC})
###编译静态库，a文件
ADD_LIBRARY(helloapi_static STATIC ${LIBHELLO_SRC})
###解决so文件和a文件冲突问题
SET_TARGET_PROPERTIES(helloapi_static PROPERTIES OUTPUT_NAME "helloapi")
###设置版本号
SET_TARGET_PROPERTIES(helloapi PROPERTIES VERSION 1.2 SOVERSION 1)

###生成文件位置
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

###安装路径
INSTALL(TARGETS helloapi helloapi_static
LIBRARY DESTINATION extras/lib
ARCHIVE DESTINATION extras/lib)

INSTALL(FILES helloapi.h DESTINATION extras/include)

