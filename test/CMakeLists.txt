add_library(CatchMain STATIC CatchMain.cpp)
target_link_libraries(CatchMain PUBLIC Catch)
target_link_libraries(CatchMain PRIVATE project_options)

add_executable(tests tests.cpp )
target_link_libraries(tests PRIVATE project_options CatchMain)

add_test(NAME MyAwesomeTest COMMAND tests)