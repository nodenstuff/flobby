add_executable (unittest EXCLUDE_FROM_ALL
    test_main.cpp
    Test.cpp
)

target_link_libraries (unittest
    cppunit
    model
    gui
    log
    dl
    ${Boost_LIBRARIES}
) 

add_custom_target(test
    DEPENDS unittest
    COMMAND unittest
)
