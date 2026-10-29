#pragma once

#include "mamaview/sensors/sensor_service.h"

namespace mamaview::app
{

class GraphicsEngine
{
public:
    explicit GraphicsEngine(sensors::ISensorSource& sensorSource);
    int run();

private:
    sensors::ISensorSource& sensorSource_;
};

} // namespace mamaview::app
