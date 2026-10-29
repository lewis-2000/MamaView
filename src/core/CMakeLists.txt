add_library(MamaViewCore STATIC
    core.cpp
)

target_include_directories(MamaViewCore
    PUBLIC
        "${PROJECT_SOURCE_DIR}/include"
)

target_compile_features(MamaViewCore PUBLIC cxx_std_17)
