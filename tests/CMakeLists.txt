add_executable(MamaViewCoreTests
    core_tests.cpp
)

target_link_libraries(MamaViewCoreTests
    PRIVATE
        MamaViewCore
)

add_test(NAME MamaViewCoreTests COMMAND MamaViewCoreTests)

if(TARGET MamaViewSensors)
    add_executable(MamaViewSensorsTests
        sensors_tests.cpp
    )

    target_link_libraries(MamaViewSensorsTests
        PRIVATE
            MamaViewSensors
    )

    add_test(NAME MamaViewSensorsTests COMMAND MamaViewSensorsTests)
endif()
