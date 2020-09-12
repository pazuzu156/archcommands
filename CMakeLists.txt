cmake_minimum_required(VERSION 3.18.2)
project(CustomCommands)

find_package(CURL REQUIRED) # get cUrl

# Project's subdirs (library and compiled apps)
add_subdirectory(src) # lib
add_subdirectory(apps) # commands
