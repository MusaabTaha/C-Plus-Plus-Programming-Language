#include <cstring>
#include <iostream>
#include <numeric>

#include "AdFunctions.h"
#include "AdTypes.h"

int main()
{
    auto ego_vehicle = Ad::data::init_ego_vehicle();
    Ad::visualize::print_vehicle(ego_vehicle);

    return 0;
}
