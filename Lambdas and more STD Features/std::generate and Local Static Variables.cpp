#include <iostream>
#include <cstdint>
#include <random>
#include <vector>
#include <algorithm>


constexpr static auto numElements = 1000000U;

std::int32_t gen()
{


    static auto seed = std::random_device{};
    static auto gen  = std::mt19937{seed()};
    static auto dist = std::uniform_int_distribution<std::int32_t>{-10, 10};

    return dist(gen);

}

template <typename T>
void printVec(const std::vector<T> &vec)
{
    for(const auto val : vec)
    {

        std::cout << val << "\n";

    }

}

int main()
{

    auto myVector = std::vector<std::int32_t>(numElements, 0U);
    std::generate(myVector.begin(), myVector.end(), gen);
    printVec(myVector);

    return 0;

}
