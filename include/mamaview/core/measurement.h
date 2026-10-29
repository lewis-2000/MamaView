#pragma once

#include <string>

namespace mamaview::core
{

struct Measurement
{
    std::string sensor;
    double value{};
};

bool isValid(const Measurement& measurement);

} // namespace mamaview::core
