#include <cassert>

#include "mamaview/core/measurement.h"

int main()
{
    assert(mamaview::core::isValid({"temperature", 36.5}));
    assert(!mamaview::core::isValid({"", 36.5}));
    assert(!mamaview::core::isValid({"temperature", -1.0}));
    return 0;
}
