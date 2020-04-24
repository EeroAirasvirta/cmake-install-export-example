include(CMakeFindDependencyMacro)

find_dependency(mylib2 REQUIRED)

include(${CMAKE_CURRENT_LIST_DIR}/MyLib-targets.cmake)
