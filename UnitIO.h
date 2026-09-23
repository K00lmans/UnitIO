#ifndef UNITIO_LIBRARY_H
#define UNITIO_LIBRARY_H

#include <llnl-units/units.hpp>

#include "UnitIO.h"

namespace UnitIO {
    // Unit systems
    namespace Units = units::precise; // All units
    namespace Customary = Units::us; // US customary system

    // Commonly used units
    inline constexpr auto& meter = Units::meter;
}

class Smart_Unit_Container {};

#endif // UNITIO_LIBRARY_H
