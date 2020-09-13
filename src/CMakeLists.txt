# wiki
add_executable(wiki wiki.cpp)
target_link_libraries(wiki commands_lib curl)
install(TARGETS wiki DESTINATION bin)

# aur
add_executable(aur aur.cpp)
target_link_libraries(aur commands_lib curl)
install(TARGETS aur DESTINATION bin)
