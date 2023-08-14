#include <iostream>
#include <cstdint>
#include <utility>
#include <tuple>
#include <string>

struct my_structure{

    std::int32_t i;
    float j;

};


std::tuple<std::int32_t, std::string, float> some_function(const std::int32_t in){

    return std::make_tuple(in, std::to_string(in), static_cast<float>(in));

}

my_structure some_function2(void){

    return my_structure{1,5.6F};

}

int main()
{

    auto my_pair = std::pair<std::int32_t, float>{42, 10.5F};
    std::cout << my_pair.first << "\n";
    std::cout << my_pair.second << "\n";

    auto my_tuple = std::tuple<std::int32_t, std::string, float>{42, "Hello", 10.5F};
    std::cout << std::get<0>(my_tuple) << "\n";
    std::cout << std::get<1>(my_tuple) << "\n";
    std::cout << std::get<2>(my_tuple) << "\n";

    auto my_tuple1 = some_function(42);
    std::cout << std::get<0>(my_tuple1) << "\n";
    std::cout << std::get<1>(my_tuple1) << "\n";
    std::cout << std::get<2>(my_tuple1) << "\n";

    const auto &[i,j,k] = some_function(42);
    std::cout << i << "\n";
    std::cout << j << "\n";
    std::cout << k << "\n";

    const auto &[wo,wi] = some_function2();
    std::cout << wo << "\n";
    std::cout << wi << "\n";

    return 0;
    
}
