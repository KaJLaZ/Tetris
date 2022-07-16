# Generic test that uses conan libs
add_executable(tetris main.cpp components/..)

target_include_directories(tetris PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(
  tetris
  PRIVATE project_options
)

if( MSVC )
    set_property( DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT tetris )
endif()