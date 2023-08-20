#include <iostream>
#include <cstdint>
#include <random>
#include <vector>
#include <algorithm>
#include <numeric>


constexpr static auto numElements = 10U;

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

    std::transform(myVector.begin(), myVector.end(), myVector.begin(), [](const auto val){ return (val * 2);});
    printVec(myVector);

    std::transform(myVector.begin(), myVector.end(), myVector.begin(), [](const auto val){ return (val / 2);});
    printVec(myVector);

    const auto sum1 = std::accumulate(myVector.begin(), myVector.end(), 0);
    std::cout << sum1 << "\n";

    return 0;

}
