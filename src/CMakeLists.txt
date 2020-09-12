# wiki
add_executable(wiki wiki.cpp)
target_link_libraries(wiki commands_lib curl)
install(TARGETS wiki DESTINATION bin)
