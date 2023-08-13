#pragma once

#include <cstdint>
#include <iostream>
#include <array>

#include "AdConstants.h"

namespace Ad
{
namespace Types
{

enum class LaneAssociationType
{
    LEFT,
    CENTER,
    RIGHT,
    NONE,
};

struct VehicleType
{
    std::int32_t id;
    LaneAssociationType lane;
    float speed_mps;
    float distance_m;
};

struct NeighborVehiclesType
{

    std::array<VehicleType, Ad::Constants::NUM_VEHICLES_ON_LANE> left;
    std::array<VehicleType, Ad::Constants::NUM_VEHICLES_ON_LANE> center;
    std::array<VehicleType, Ad::Constants::NUM_VEHICLES_ON_LANE> right;

};

} // namespace Types
} // namespace Ad
