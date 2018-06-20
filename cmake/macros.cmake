function(ADD_TESTS_SOURCES TEST_SRCS)
    enable_testing()
    find_package(Boost COMPONENTS unit_test_framework log REQUIRED)
    message("Tests: " ${TEST_SRCS})

    foreach(testSrc ${TEST_SRCS})
            #Extract the filename without an extension (NAME_WE)
            get_filename_component(testName ${testSrc} NAME_WE)

            #Add compile target
            add_executable(${testName} ${testSrc})

            #link to Boost libraries AND your targets and dependencies
            target_link_libraries(${testName} ${Boost_LIBRARIES})

            #I like to move testing binaries into a testBin directory
            set_target_properties(${testName} PROPERTIES
                RUNTIME_OUTPUT_DIRECTORY  testBin)

            foreach(LIB ${ARGN})
                target_link_libraries(${testName} ${LIB})
            endforeach(LIB)

            #Finally add it to test execution -
            #Notice the WORKING_DIRECTORY and COMMAND
            add_test(NAME ${testName}
                     COMMAND ${testName})
            if (${WITH_PROF})
                add_dependencies(coverage ${testName})
            endif()
    endforeach(testSrc)
endfunction(ADD_TESTS_SOURCES)

function(ADD_TESTS)
    file(GLOB TEST_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/test/*_test.cpp)
    ADD_TESTS_SOURCES("${TEST_SRCS}" "${ARGN}")
endfunction(ADD_TESTS)
