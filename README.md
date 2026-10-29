# MamaView
Imaging view and monitoring application for miscarriages.

## Required packages

The project requires:

- CMake 3.14 or newer
- A C++17 compiler
- OpenGL development libraries and headers

GLFW 3.4, GLM 1.0.1, and Assimp 5.4.3 are downloaded automatically by CMake
into the `vendors` directory during configuration. They do not need to be
installed separately.

Configure the project with:

```sh
cmake -S . -B build
```

## Project architecture

- `MamaViewCore` in `src/core` is the shared domain library.
- `MamaViewApp` in `src/app` is the graphics application and visualization
  engine. It owns the window/render loop and consumes sensor data.
- `MamaViewSensors` in `src/sensors` is the hardware/IoT integration boundary.
  `ISensorSource` is the interface the future ultrasound device must implement.
  `SimulatedSensorSource` currently provides data so the app can be exercised
  before the hardware exists.
- `MamaViewCoreTests` and `MamaViewSensorsTests` in `tests` are test skeletons
  registered with CTest.

Targets that need the graphics and asset dependencies should link against
`MamaViewDependencies`.

The project is configured from the root `CMakeLists.txt`; configuration does
not require a separate CMake file in `vendors`.
