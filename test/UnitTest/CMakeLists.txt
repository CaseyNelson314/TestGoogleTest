cmake_minimum_required(VERSION 3.14)

set(TestName Test)

add_executable(
  ${TestName}
  Test.cpp
  Hoge.cpp
)

target_link_libraries(
  ${TestName}
  gtest_main
)

gtest_discover_tests(${TestName})
