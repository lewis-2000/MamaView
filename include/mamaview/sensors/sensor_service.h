#pragma once

#include "mamaview/core/measurement.h"

namespace mamaview::sensors
{

class ISensorSource
{
public:
    virtual ~ISensorSource() = default;
    virtual core::Measurement read() = 0;
};

class SimulatedSensorSource final : public ISensorSource
{
public:
    explicit SimulatedSensorSource(double initialValue = 36.5);

    core::Measurement read() override;

private:
    double value_;
};

} // namespace mamaview::sensors
