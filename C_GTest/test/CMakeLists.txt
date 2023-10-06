project(my_function_test)

# Include Google Test using FetchContent
include(FetchContent)
FetchContent_Declare(googletest
    URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Define your test executable and link against Google Test and your library
add_executable(my_function_test my_function_test.cpp)

# Link your test executable with the library
target_link_libraries(my_function_test gtest gtest_main my_project_library)

# Discover and run tests
include(GoogleTest)
gtest_discover_tests(my_function_test)
