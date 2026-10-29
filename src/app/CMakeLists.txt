add_executable(MamaViewApp
    graphics_engine.cpp
    main.cpp
)

target_link_libraries(MamaViewApp
    PRIVATE
        MamaViewCore
        MamaViewSensors
        MamaViewDependencies
)
