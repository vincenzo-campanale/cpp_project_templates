#-------------------------------
# Copyright (C) 2020, Neuraxial
#-------------------------------

add_executable(tests
    tests.cpp
)

target_link_libraries(tests
  PRIVATE
    gmock_main
)

target_include_directories(tests PUBLIC ${CMAKE_SOURCE_DIR})

add_test(NAME tests COMMAND tests)
