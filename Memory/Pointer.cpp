#include <iostream>
#include <cstdint>
#include <array>

template<std::size_t N>
void printArray(const std::array<std::uint32_t, N> *arr)
{

    std::cout << arr << "\n";

    for(std::uint32_t i = 0; i<arr->size() ;i++)
    {

        std::cout << (*arr)[i] << "\n";

    }

}

int main()
{

    std::uint32_t value = 42U;

    std::uint32_t *value_ptr = &value;
    std::cout << value_ptr << '\n';
    std::cout << *value_ptr << '\n';

    constexpr static auto len = std::size_t{5U};
    auto array = std::array<std::uint32_t, len>{1,2,3,4,5};
    std::cout << &array << "\n";
    printArray(&array);


    return 0;

}
