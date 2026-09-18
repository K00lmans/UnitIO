#ifndef UNITIO_LIBRARY_H
#define UNITIO_LIBRARY_H

#include <mp-units/framework.h>
#include <mp-units/systems/isq.h>
#include <mp-units/systems/si.h>
#include <mp-units/systems/imperial.h>
#include <mp-units/systems/usc.h>
#include <mp-units/systems/cgs.h>
#include <mp-units/systems/angular.h>
#include <mp-units/systems/iau.h>
#include <mp-units/systems/hep.h>
#include <mp-units/systems/typographic.h>
#include <mp-units/systems/natural.h>
#include <mp-units/systems/iec.h>

namespace UnitIO {
    // Required to function for this library
    using mp_units::Quantity;

    // Namespacing from one library to another
    namespace Dimensions = mp_units::isq; // For power users only, categories of units
    namespace SI = mp_units::si;
    namespace Imperial = mp_units::imperial;
    namespace Customary = mp_units::usc; // US customary units
    namespace Classical = mp_units::cgs; // Classical scientific units, the CGS system
    namespace Angular = mp_units::angular; // Rotational units
    namespace Astronomical = mp_units::iau;
    namespace Particles = mp_units::hep; // Units related to particle physics
    namespace Typography = mp_units::typographic; // Units related to typefaces
    namespace Theoretical = mp_units::natural; // Units related to theoretical physics
    namespace Binary = mp_units::iec; // Data size units

    // Standard units for coolprop. For reasons beyond me, the compound units show errors in my IDE despite compiling
    // just fine. If you can fix it, amazing, otherwise just ignore it for your own sanity.
    using SI::kelvin;
    using SI::pascal;
    using SI::kilogram;
    using SI::joule;
    using SI::mole;
    using SI::second;
    using SI::watt;
    using SI::newton;
    inline constexpr auto meter = SI::metre;
    inline constexpr auto cubic_meter = SI::unit_symbols::m3;
    inline constexpr auto kg_per_cubic_meter = kilogram / cubic_meter;
    inline constexpr auto joule_per_kilogram = joule / kilogram;
    inline constexpr auto joule_per_kilogram_kelvin = joule_per_kilogram / kelvin;
    inline constexpr auto joule_per_mole_kelvin = joule / mole / kelvin;
    inline constexpr auto pascal_seconds = pascal * second;
    inline constexpr auto watt_per_meter_kelvin = watt / meter / kelvin;
    inline constexpr auto newton_per_meter = newton / meter;
    inline constexpr auto meter_per_second = meter / second;
    inline constexpr auto kilogram_per_kilomole = kilogram / mp_units::si::kilo<mole>;
}

class Units {
};

#endif // UNITIO_LIBRARY_H
