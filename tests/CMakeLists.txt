

set(tests
    test_1.cpp
)

add_executable(testing test.cpp ${tests})
target_link_libraries(testing gtest)

enable_testing()
add_test(test1 testing)