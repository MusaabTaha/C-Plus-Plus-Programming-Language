#include <iostream>
#include <cstdint>
#include <random>
#include <vector>

constexpr static auto numElements = 1'000'000U;

int main()
{

    auto myVector = std::vector<std::int32_t>(numElements, 0U);

    auto seed = std::random_device{};
    auto gen  = std::mt19937{seed()};
    auto dist = std::uniform_int_distribution<std::int32_t>{-10, 10};

    for(auto &val : myVector){

        val = dist(gen);
     }

     for(std::size_t i = 0;i <= 1000000; ++i){

        std::cout << myVector[i] << "\n";

     }

    return 0;

}
