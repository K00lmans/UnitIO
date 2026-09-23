#ifndef UNITIO_LIBRARY_H
#define UNITIO_LIBRARY_H

#include <llnl-units/units.hpp>
#include <unordered_map>
#include <utility>

#include "UnitIO.h"

namespace UnitIO {
    // Unit systems
    namespace Units = units::precise; // All units
    namespace SI {
        inline constexpr auto &meter = Units::meter;
        inline constexpr auto &kilogram = Units::kilogram;
        inline constexpr auto &second = Units::second;
        inline constexpr auto &amp = Units::Ampere;
        inline constexpr auto &kelvin = Units::Kelvin;
        inline constexpr auto &mole = Units::mol;
        inline constexpr auto &candela = Units::candela;
        inline constexpr auto &radians = Units::radian;
        inline constexpr auto &hertz = Units::hertz;
        inline constexpr auto &volt = Units::volt;
        inline constexpr auto &pascal = Units::Pa;
        inline constexpr auto &newton = Units::newton;
        inline constexpr auto &joule = Units::joule;
        inline constexpr auto &watt = Units::watt;
        inline constexpr auto &coulomb = Units::coulomb;
        inline constexpr auto &lumen = Units::lumen;
        inline constexpr auto &milligram = Units::mg;
        inline constexpr auto &gram = Units::g;
        inline constexpr auto &milliliter = Units::mL;
        inline constexpr auto &liter = Units::L;
        inline constexpr auto &nanometer = Units::nm;
        inline constexpr auto &millimeter = Units::mm;
        inline constexpr auto &kilometer = Units::km;
        inline constexpr auto &centimeter = Units::cm;
        inline constexpr auto &bar = Units::bar;
    }
    namespace Customary = Units::us; // US customary system
    namespace Time = Units::time;
    namespace Imperial = Units::imp;
    namespace Nautical = Units::nautical;
    namespace Temperature = Units::temperature;
    namespace Typography = Units::typographic::dtp;
    namespace Pressure = Units::pressure;
    namespace Energy = Units::energy;
    namespace Data = Units::data;

    // Commonly used units
    inline constexpr auto &meter = Units::meter;
    inline constexpr auto &horsepower = Units::hp;

    // Default Units
    inline static const std::unordered_map<units::detail::unit_data, units::precise_unit> Default_Units = {};
}

class Smart_Unit_Container {
    units::precise_measurement input_value;
    units::precise_measurement output_value;

public:
    Smart_Unit_Container(double value, units::precise_unit unit);

    Smart_Unit_Container(double value, units::precise_unit input_unit, units::precise_unit output_unit);

    ~Smart_Unit_Container() = default;

    [[nodiscard]] double get_value() const { return output_value.value(); }

    [[nodiscard]] double get_value_as(const units::precise_unit unit) const {
        return output_value.value_as(unit);
    }

    [[nodiscard]] std::pair<units::precise_unit, units::precise_unit> get_units() const {
        return {input_value.as_unit(), output_value.as_unit()};
    }

    void convert_to(units::precise_unit unit);
};

#endif // UNITIO_LIBRARY_H
