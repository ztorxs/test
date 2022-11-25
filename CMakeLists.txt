cmake_minimum_required (VERSION 3.0)

project(Test)

add_library(hello_world SHARED
  hello_world/hello_world.h
  hello_world/hello_world.cpp
)

set_target_properties(hello_world PROPERTIES DEFINE_SYMBOL HELLO_WORLD_EXPORT)

add_executable(test
  main.cpp
)

target_link_libraries(test PUBLIC  
  hello_world
)