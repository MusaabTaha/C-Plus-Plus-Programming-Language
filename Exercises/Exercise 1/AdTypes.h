#pragma once

#include <cstdint>

#include "AdConstants.h"


namespace Ad{

    namespace Types{

        enum class LaneAssociationType{

            unknowLane,
            rightLane,
            centerLane,
            leftLane,

        };

        struct VehicleType{

            float id;
            LaneAssociationType lane;
            float speed;
            float relativeSpeed;

        };

    }//namespace Types

}//namespace Ad
