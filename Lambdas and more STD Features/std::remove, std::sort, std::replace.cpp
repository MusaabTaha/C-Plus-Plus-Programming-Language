#include <iostream>
#include <cstdint>
#include <random>
#include <vector>
#include <algorithm>
#include <numeric>


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

    std::replace_if(myVector.begin(), myVector.end(), [](const auto val){ return ((val%2) == 0);}, -1);
    printVec(myVector);

    std::sort(myVector.begin(), myVector.end(), [](const auto i, const auto j){ return i < j;});
    printVec(myVector);

    std::sort(myVector.begin(), myVector.end(), [](const auto i, const auto j){ return i > j;});
    printVec(myVector);

    //pre C++20
    auto it = std::remove(myVector.begin(), myVector.end(), -1);
    myVector.erase(it, myVector.end());
    printVec(myVector);

    //post c++20
    std::erase(myVector, 9);
    printVec(myVector);
    std::erase_if(myVector, [](const auto i) { return i < 0; });
    printVec(myVector);

    return 0;

}
