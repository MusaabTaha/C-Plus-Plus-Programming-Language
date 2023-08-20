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

struct data
{
    std::int32_t v1;
    std::int32_t v2;

};

int main()
{

    auto myVector = std::vector<std::int32_t>(numElements, 0U);
    std::generate(myVector.begin(), myVector.end(), gen);
    printVec(myVector);
    std::cout << "\n";

    const auto min = std::min_element(myVector.begin(), myVector.end());
    const auto max = std::max_element(myVector.begin(), myVector.end());
    std::cout << "Min = " << *min << "\n" << "Max = " << *max << "\n";

    const auto strc1 = std::vector<data>{{1,1},{1,2}};
    const auto strc2 = std::vector<data>{{1,1},{3,2}};

    const auto eq = std::equal(std::execution::par, strc1.begin(),
                               strc1.end(), strc2.begin(),
                               [](const auto &i, const auto &j){ return ((i.v1<j.v1) && (i.v2<j.v2)); });

    std::cout << "Equal ? " << std::boolalpha << eq << "\n";



    return 0;

}
