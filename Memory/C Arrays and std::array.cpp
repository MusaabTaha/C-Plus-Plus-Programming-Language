#include <iostream>
#include <cstdint>
#include <array>

void arrayPrintOut(const std::uint32_t array[], const std::uint32_t len)
{

    for(std::uint32_t i = 0; i<len; i++)
    {

        std::cout << array[i] << "\n";

    }
}

template<std::size_t N>
void arrayPrintOut2(const std::array<std::uint32_t, N> arr)
{
    //std::cout << "array size = " << arr.size() << "\n";
    for(std::size_t i = 0; i< arr.size(); i++)
    {

        std::cout << arr[i] << "\n";

    }

}


int main()
{

    constexpr static auto len = size_t{5};

    //C-style array
    std::uint32_t array[len] = {1,2,3,4,5}; // C style
    arrayPrintOut(array,len); // A function to print out the array members

    //C++ style array
    //std::array<std::uint32_t,5> array3 = {1,2,3,4,5};
    auto array2 = std::array<uint32_t, len>{1,2,3,4,5};
    arrayPrintOut2(array2);

    return 0;

}
