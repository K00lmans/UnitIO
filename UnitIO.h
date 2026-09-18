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

    // Standard units for coolprop
    using mp_units::si::kelvin;
    using mp_units::si::pascal;
    using mp_units::si::kilogram;
    using mp_units::si::joule;
    using mp_units::si::mole;
    inline constexpr auto meter = mp_units::si::metre;
    inline constexpr auto cubic_meter = mp_units::si::unit_symbols::m3;
    inline constexpr auto kg_per_cubic_meter = kilogram / cubic_meter;
    inline constexpr auto joule_per_kilogram = joule / kilogram;
    inline constexpr auto joule_per_mole = joule / mole;
}

class Units {
};

#endif // UNITIO_LIBRARY_H
