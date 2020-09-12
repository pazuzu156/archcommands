# set sources to compile with this library
set(SOURCES
  args.cpp
  url.cpp)

# Create library and set it's include directories
add_library(commands_lib ${SOURCES})
target_include_directories(commands_lib PUBLIC "${PROJECT_SOURCE_DIR}/include")
