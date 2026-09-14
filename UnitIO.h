#ifndef UNITIO_LIBRARY_H
#define UNITIO_LIBRARY_H

#include <mp-units/framework.h>
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
    using mp_units::Quantity;

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
}

class Units {
};

#endif // UNITIO_LIBRARY_H
