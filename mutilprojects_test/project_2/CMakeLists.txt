
add_library(project_2 "")#这里只需要源文件
# 将多个文件放到一个变量中，方便统一管理
target_sources(project_2
    PRIVATE
        src/project_2.c
        include/project_2.h
)

add_executable (project_2_test "src/project_2.c")
# 将头文件库目录添加到目标项目
# 下面这种方案是存在库文件的方式
# target_link_libraries(RepsCommon
#     PUBLIC LibraryName1
#	  PUBLIC LibraryName2
#	 )

include_directories(./include)

MESSAGE(STATUS "PROJECT_BINARY_DIR= " ${PROJECT_BINARY_DIR})


