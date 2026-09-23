#include "UnitIO.h"

Smart_Unit_Container::Smart_Unit_Container(const double value, const units::precise_unit unit) {
    input_value = units::precise_measurement(value, unit);
    // Checks the default unit map to see if we have a predefined base unit for the inputted unit
    if (const auto base_units = Default_Units.find(unit.base_units()); base_units != Default_Units.end()) {
        output_value = units::precise_measurement(units::convert(value, unit, base_units->second), base_units->second);
    } else {
        // If not, simply use the .base_units() value
        auto fallback_base_units = units::precise_unit(unit.base_units());
        output_value =
                units::precise_measurement(units::convert(value, unit, fallback_base_units), fallback_base_units);
    }
}

Smart_Unit_Container::Smart_Unit_Container(const double value, units::precise_unit input_unit,
                                           units::precise_unit output_unit) {
    input_value = units::precise_measurement(value, input_unit);
    output_value = units::precise_measurement(units::convert(value, input_unit, output_unit), output_unit);
}
