#include "mamaview/app/graphics_engine.h"
#include "mamaview/sensors/sensor_service.h"

int main()
{
    mamaview::sensors::SimulatedSensorSource sensorSource;
    mamaview::app::GraphicsEngine graphicsEngine(sensorSource);
    return graphicsEngine.run();
}
