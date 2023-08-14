#include <iostream>
#include <cstdint>
#include <array>
#include <vector>
#include <span>


//Function overload
/*template<std::size_t N>
void print(const std::array<std::int32_t, N> arr){

    for(const auto value : arr){

        std::cout << value << "\n";
    }

}

void print(const std::vector<std::int32_t> vec){

    for(const auto value : vec){

        std::cout << value << "\n";

    }

}*/

void print(const std::span<std::int32_t> span){

    for(const auto value : span){

        std::cout << value << "\n";

    }

}



int main()
{

    std::int32_t array[5] = {1,2,3,3,5};
    auto my_array = std::array<std::int32_t, 5U>{1,2,3,4,5};
    auto my_vec = std::vector<std::int32_t>{1,2,3,4,5};

    print(array);
    print(my_array);
    print(my_vec);

    return 0;

}
