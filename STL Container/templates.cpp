#include <iostream>
#include <cstdint>
#include <array>
#include <vector>
#include <span>

template <typename T>
void print(const std::span<T> span){

    for(const auto val : span){

        std::cout << val << "\n";

    }

}


int main()
{

    auto my_array = std::array<std::int32_t, 5U>{1,2,3,4,5};
    auto my_vector = std::vector<float>{1.1,1.2,1.3,1.4,1.5};

    print<int32_t>(my_array);
    print<float>(my_vector);

    return 0;

}
