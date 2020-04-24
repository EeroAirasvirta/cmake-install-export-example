cmake_minimum_required(VERSION 3.10)

project(MyApp)

find_package(MyLib REQUIRED)

add_executable(${PROJECT_NAME}
  src/myapp.cpp
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    MyLib::MyLib
)

install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION bin
)
