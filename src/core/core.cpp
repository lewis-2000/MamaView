#include "mamaview/core/measurement.h"

namespace mamaview::core
{

bool isValid(const Measurement& measurement)
{
    return measurement.value >= 0.0 && !measurement.sensor.empty();
}

} // namespace mamaview::core
