#include <iostream>
#include <cstdint>


constexpr std::uint64_t faculty(const std::uint8_t n){

    auto result = std::uint64_t{1};

    for(std::uint8_t i = 1; i<= n ; i++){

        result *= 1;

    }

    return result;

}


int main(){

    const auto a = faculty(5); //execute at runtime only
    constexpr static auto b = faculty(5); //execute either at compile time or runtime

    return 0;

}
