#include <iostream>
#include <cstdint>
#include <random>
#include <vector>
#include <algorithm>
#include <numeric>
#include <execution>
#include <chrono>


constexpr static auto numElements = std::size_t{10U};

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
    std::cout << "\n";

    auto l = [](const auto val){ return ((val > -5) && (val < 5));};

    const auto check1 = std::any_of(myVector.begin(), myVector.end(), l);
    const auto check2 = std::all_of(myVector.begin(), myVector.end(), l);
    const auto check3 = std::none_of(myVector.begin(), myVector.end(), l);

    std::cout << std::boolalpha << check1 << "\n";
    std::cout << std::boolalpha << check2 << "\n";
    std::cout << std::boolalpha << check3 << "\n";

    return 0;

}
