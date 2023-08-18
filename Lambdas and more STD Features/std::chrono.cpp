#include <iostream>
#include <cstdint>
#include <chrono>
#include <random>

using clockType = std::chrono::steady_clock;
using clockRes = std::chrono::microseconds;

constexpr static auto numElements = 1'000'000U;

int main()
{
    
    auto myVector = std::vector<std::int32_t>(numElements, 0U);

    auto seed = std::random_device{};
    auto gen  = std::mt19937{seed()};
    auto dist = std::uniform_int_distribution<std::int32_t>{-10, 10};

    const auto startTime = clockType::now();

    for(auto &val : myVector){

        val = dist(gen);

    }

    const auto endTime = clockType::now();

    for(std::size_t i = 0;i <= 10; ++i){

        std::cout << myVector[i] << "\n";

    }

    const auto elpasedTime = std::chrono::duration_cast<clockRes>(endTime - startTime).count();

    std::cout << elpasedTime << "\n";

    return 0;

}
