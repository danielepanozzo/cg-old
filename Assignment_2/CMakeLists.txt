cmake_minimum_required(VERSION 2.8.12)
project(Assignment2)

### Output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

### Compilation flags: adapt to your needs ###
if(MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP /bigobj") ### Enable parallel compilation
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR} )
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR} )
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /w") # disable all warnings (not ideal but...)
else()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11") #### Libigl requires a modern C++ compiler that supports c++11
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../" )
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w") # disable all warnings (not ideal but...)
endif()

### Add src to the include directories
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/src")

### Include Eigen for linear algebra
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../ext/eigen")

### Compile GLFW3 statically
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL " " FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL " " FORCE)
set(GLFW_BUILD_DOCS OFF CACHE BOOL " " FORCE)
set(GLFW_BUILD_INSTALL OFF CACHE BOOL " " FORCE)
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/../ext/glfw" "glfw")
set(LIBRARIES "glfw" ${GLFW_LIBRARIES})

### On windows, you also need glew
if(WIN32)
  set(GLEW_INSTALL OFF CACHE BOOL " " FORCE)
  add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/ext/glew" "glew")
  list(APPEND VIEWER_INCLUDE_DIRS "${NANOGUI_DIR}/ext/glew/include")
  list(APPEND LIBRARIES "glew")
endif()

### Compile all the cpp files in src
file(GLOB SOURCES
"${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

message(FATAL_ERROR ${LIBRARIES})

add_executable(${PROJECT_NAME}_bin ${SOURCES})
target_link_libraries(${PROJECT_NAME}_bin ${LIBRARIES})

