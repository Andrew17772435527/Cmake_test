# CMakeList.txt: project_1 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

add_library(project_1 "")
# 将源代码添加到此项目的可执行文件。
target_sources(project_1
    PRIVATE
        project_1.cpp
)
add_executable (project_1_test project_1)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET project_1 PROPERTY CXX_STANDARD 20)
endif()

MESSAGE(STATUS "PROJECT_SOURCE_DIR= " ${PROJECT_SOURCE_DIR})


INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/project2/include )
TARGET_LINK_LIBRARIES(project_1 project_2)

#target_link_libraries(project_1
#    PRIVATE project_2
#)


# TODO: 如有需要，请添加测试并安装目标。
