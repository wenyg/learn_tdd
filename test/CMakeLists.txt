project(calculatorTest)

include_directories(${PROJECT_SOURCE_DIR}/test/include)
link_directories(${PROJECT_SOURCE_DIR}/test/lib)

add_executable(calculatorTest ${PROJECT_SOURCE_DIR}/test/calculatorTest.cpp)
target_link_libraries(calculatorTest gtestd gmockd pthread)