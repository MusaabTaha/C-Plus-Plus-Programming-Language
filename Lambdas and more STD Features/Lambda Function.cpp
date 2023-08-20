#include <iostream>
#include <cstdint>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

template <typename T>
void printVec(const std::vector<T> &vec)
{

    for (const auto val : vec){

        std::cout << val << "\n";

    }

}

template <typename T>
bool checkEven(const T val)
{

    return ((val%2) == 0);

}

int main()
{

    auto myVec = std::vector<std::uint32_t>(10,0);
    printVec(myVec);
    std::iota(myVec.begin(), myVec.end(), 0);
    printVec(myVec);

    const auto N = 3;
    auto filterEven = [N](const auto value ){ return ((value%N) == 0);}; //Lambdas function

    for(const auto val : myVec)
    {

        std::cout << std::boolalpha << filterEven(val) << "\n";

    }

    return 0;

}
