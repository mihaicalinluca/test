cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CXX_STANDARD 17)

project(test)


include_directories(test)

find_package(nlohmann_json 3.7.3 REQUIRED)

add_executable(MyExec
  Source1.cpp
  IHandler.h
  AddHandler.h
  SubHandler.h
  MulHandler.h
  DivHandler.h
  Helpers.h
)



