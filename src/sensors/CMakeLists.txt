add_library(MamaViewSensors STATIC
    sensor_service.cpp
)

target_include_directories(MamaViewSensors
    PUBLIC
        "${PROJECT_SOURCE_DIR}/include"
)

target_link_libraries(MamaViewSensors
    PUBLIC
        MamaViewCore
)

target_compile_features(MamaViewSensors PUBLIC cxx_std_17)
