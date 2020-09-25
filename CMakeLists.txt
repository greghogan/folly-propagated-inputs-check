cmake_minimum_required(VERSION 3.15)

project(folly-propagated-inputs-check LANGUAGES CXX)

# Required by a subset of Folly
set(CMAKE_CXX_STANDARD 17)

# Without finding 'gflags', target_link_libraries() on 'Folly' fails in finding 'gflags_shared'
find_package(gflags REQUIRED)
find_package(Folly REQUIRED)

add_executable(folly-propagated-inputs-check folly-propagated-inputs-check.cpp)
target_link_libraries(folly-propagated-inputs-check PRIVATE Folly::folly)
