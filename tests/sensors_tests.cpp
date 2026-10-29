#include <cassert>

#include "mamaview/sensors/sensor_service.h"

int main()
{
    mamaview::sensors::SimulatedSensorSource source(36.5);
    const auto first = source.read();
    const auto second = source.read();

    assert(mamaview::core::isValid(first));
    assert(first.sensor == "simulated-temperature");
    assert(first.value == 36.5);
    assert(second.value > first.value);
    return 0;
}
