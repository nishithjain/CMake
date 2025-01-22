add_executable(MyApp main.cpp)
target_include_directories( MyApp
                            PRIVATE
                            ../Libraries/MyLib01/include
                            ../Libraries/MyLib02/include)
target_link_libraries(  MyApp
                        PUBLIC MyLib01
                        PUBLIC MyLib02)