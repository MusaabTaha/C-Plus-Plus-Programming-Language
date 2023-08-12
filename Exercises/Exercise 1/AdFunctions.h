#pragma once

#include "AdTypes.h"


namespace Ad{

    namespace utils{

        float kph_to_mps(const float kph){

            auto mps = float{};
            mps = ((kph*1000)/3600);
            return mps;
        }

    }



    namespace data{

        Ad::Types::VehicleType init_ego_vehicle(){

            auto vehicle = Ad::Types::VehicleType{.id = -1.0F,
            .lane = Ad::Types::LaneAssociationType::centerLane,
            .speed = 135.0F,
            .relativeSpeed = 0.0F};

            return vehicle;

        }

    }

    namespace visualize{

        void print_vehicle(const Ad::Types::VehicleType vehicle){

            std::cout << vehicle.id << "\n";
            std::cout << vehicle.speed << "\n";
            std::cout << vehicle.relativeSpeed << "\n";
        }

    }



}
