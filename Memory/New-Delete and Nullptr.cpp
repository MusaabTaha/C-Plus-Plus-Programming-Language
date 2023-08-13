#include <iostream>
#include <cstdint>
#include <array>

int main()
{

    std::uint32_t *array_ptr;
    auto len = std::size_t{};
    std::cin >> len;

    array_ptr = new std::uint32_t[len];
    std::cout << array_ptr << "\n";

    if(array_ptr){

        for(std::size_t i = 0; i<len ;i++){

            array_ptr[i] = static_cast<std::uint32_t>(i);

        }

        for(std::size_t i = 0; i<len ; i++){

            std::cout << array_ptr[i] << "\n";

        }

    }

    delete[] array_ptr;
    array_ptr = nullptr;

    if(!array_ptr){

        std::cout << "invalid pointer" << "\n";

    }

    return 0;

}
