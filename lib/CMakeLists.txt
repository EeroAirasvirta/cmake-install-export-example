cmake_minimum_required(VERSION 3.10)

project(MyLib)

find_package(mylib2 REQUIRED)

add_library(${PROJECT_NAME} SHARED
  src/mylib.cpp
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    MyLib2::MyLib2
)

target_include_directories(${PROJECT_NAME}
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

include(GNUInstallDirs)
set(INSTALL_CONFIGDIR ${CMAKE_INSTALL_LIBDIR}/cmake/MyLib)

install(TARGETS ${PROJECT_NAME}
  EXPORT mylib-targets
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

install(FILES "cmake/MyLibConfig.cmake"
  DESTINATION ${INSTALL_CONFIGDIR}
)

install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(EXPORT mylib-targets
  NAMESPACE MyLib::
  FILE MyLib-targets.cmake
  DESTINATION ${INSTALL_CONFIGDIR}
)
