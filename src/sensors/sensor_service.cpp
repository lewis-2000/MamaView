#include "mamaview/sensors/sensor_service.h"

namespace mamaview::sensors
{

SimulatedSensorSource::SimulatedSensorSource(double initialValue)
    : value_(initialValue)
{
}

core::Measurement SimulatedSensorSource::read()
{
    const core::Measurement measurement{"simulated-temperature", value_};
    value_ += 0.1;
    return measurement;
}

} // namespace mamaview::sensors
