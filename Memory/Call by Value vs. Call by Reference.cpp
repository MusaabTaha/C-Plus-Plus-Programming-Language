#include <iostream>
#include <cstdint>
#include <array>

template<std::size_t N>
void arrayPrint(const std::array<std::uint32_t, N> &arr){

    //std::cout << &arr << "\n";

    for(std::uint32_t i = 0; i<arr.size();i++){

        std::cout << arr[i] << "\n";

    }

}

template<std::size_t N>
void doubleArry(std::array<std::uint32_t, N> &arr){

    //std::cout << &arr << "\n";

    for(std::uint32_t i = 0; i<arr.size();i++){

        arr[i] *= 2;

    }

}

int main()
{

    constexpr static auto len = std::size_t{5};
    auto array = std::array<std::uint32_t, len>{1,2,3,4,5};
    //std::cout << &array << "\n";
    arrayPrint(array);
    doubleArry(array);
    arrayPrint(array);

    return 0;

}
