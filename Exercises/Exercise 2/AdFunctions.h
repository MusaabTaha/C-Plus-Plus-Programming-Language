#pragma once

#include "AdTypes.h"





namespace Ad
{
namespace Utils
{

float kph_to_mps(const float kph){

    auto mps = float{};
    mps = kph/3.6F;

    return mps;

}

} // namespace Utils


void init_vehicle(Ad::Types::VehicleType &vehicle, const std::int32_t id, const Ad::Types::LaneAssociationType lane,
                  const float speed, const float distance){


                    vehicle.id = id;
                    vehicle.lane = lane;
                    vehicle.speed_mps = Ad::Utils::kph_to_mps(speed);
                    vehicle.distance_m = distance;


                  }

namespace Data
{

Ad::Types::VehicleType init_ego_vehicle(){

    auto vehicle = Ad::Types::VehicleType{
    .id = Ad::Constants::EGO_VEHICLE_ID,
    .lane = Ad::Types::LaneAssociationType::CENTER,
    .speed_mps = Ad::Utils::kph_to_mps(135.0F),
    .distance_m = 0};

    return vehicle;

}

Ad::Types::NeighborVehiclesType init_vehicles(){

    auto vehicles = Ad::Types::NeighborVehiclesType{};

    init_vehicle(vehicles.right[0], 1,Ad::Types::LaneAssociationType::RIGHT,100,50);
    init_vehicle(vehicles.right[1], 2,Ad::Types::LaneAssociationType::RIGHT,100,50);
    init_vehicle(vehicles.center[0], 3,Ad::Types::LaneAssociationType::CENTER,100,50);
    init_vehicle(vehicles.center[1], 4,Ad::Types::LaneAssociationType::CENTER,100,50);
    init_vehicle(vehicles.left[0], 5,Ad::Types::LaneAssociationType::LEFT,100,50);
    init_vehicle(vehicles.left[1], 6,Ad::Types::LaneAssociationType::LEFT,100,50);

    return vehicles;

}

} // namespace Data

namespace Visualize
{

void print_vehicle(const Ad::Types::VehicleType &vehicle)
{

    std::cout << "ID: " << vehicle.id << '\n';
    std::cout << "Speed (m/s): " << vehicle.speed_mps << '\n';
    std::cout << "Distance (m): " << vehicle.distance_m << '\n';
    std::cout << "Lane: " << static_cast<std::int32_t>(vehicle.lane) << '\n';

}

void print_neighbor_vehicles(const Ad::Types::NeighborVehiclesType &vehicles)
{

    print_vehicle(vehicles.right[0]);
    print_vehicle(vehicles.right[1]);
    print_vehicle(vehicles.center[0]);
    print_vehicle(vehicles.center[1]);
    print_vehicle(vehicles.left[0]);
    print_vehicle(vehicles.left[1]);

}

void print_vehicle_on_lane(const VehicleType *const vehicle,
                           const float range_m,
                           const float offset_m,
                           std::string &string,
                           std::size_t &idx)
{
    if ((vehicle != nullptr) && (range_m >= vehicle->distance_m) &&
        (vehicle->distance_m > (range_m - offset_m)))
    {
        string[1] = 'V';
        idx++;
    }
    else if ((vehicle != nullptr) &&
             (std::abs(vehicle->distance_m) > VIEW_RANGE_M))
    {
        idx++;
    }
}

void print_scene(const VehicleType &ego_vehicle,
                 const NeighborVehiclesType &vehicles)
{
    std::cout << "    \t   L     C     R  \n";

    auto left_idx = std::size_t{0};
    auto center_idx = std::size_t{0};
    auto right_idx = std::size_t{0};

    const auto offset_m = std::uint32_t{20};
    const auto view_range_m = static_cast<std::int32_t>(VIEW_RANGE_M);

    for (auto i = view_range_m; i >= -view_range_m; i -= offset_m)
    {
        const auto range_m = static_cast<float>(i);

        auto left_string = std::string{"   "};
        auto center_string = std::string{"   "};
        auto right_string = std::string{"   "};

        if ((range_m >= ego_vehicle.distance_m) &&
            (ego_vehicle.distance_m > (range_m - offset_m)))
        {
            center_string[1] = 'E';
        }

        if (left_idx < Ad::Constants::NUM_VEHICLES_ON_LANE)
        {
            print_vehicle_on_lane(&vehicles.vehicles_left_lane[left_idx],
                                  range_m,
                                  offset_m,
                                  left_string,
                                  left_idx);
        }
        if (center_idx < NUM_VEHICLES_ON_LANE)
        {
            print_vehicle_on_lane(&vehicles.vehicles_center_lane[center_idx],
                                  range_m,
                                  offset_m,
                                  center_string,
                                  center_idx);
        }
        if (right_idx < NUM_VEHICLES_ON_LANE)
        {
            print_vehicle_on_lane(&vehicles.vehicles_right_lane[right_idx],
                                  range_m,
                                  offset_m,
                                  right_string,
                                  right_idx);
        }


        std::cout << i << "\t| " << left_string << " | " << center_string
                  << " | " << right_string << " | \n";
    }
}

} // namespace Visualize

} // namespace Ad
