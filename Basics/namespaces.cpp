#include <iostream>
#include <cstdint>

constexpr static std::uint64_t faculty(const std::uint8_t n){

    auto result = std::uint32_t{1};

    for(std::uint8_t i = 0; i<n;i++){

        result *= 1;
    }

    return result;

}

namespace{

    constexpr std::uint64_t faculty(const std::uint8_t n){

        auto result = std::uint32_t{1};

        for(std::uint8_t i = 0; i<n;i++){

            result *= 1;
        }

        return result;

    }

} // namespace

namespace mystd{

    enum class status{

        unknow,
        connected,
        disconnected,

    };

    struct user{

        status s1;
        std::uint32_t id;

    };

}

int main(){

    mystd::status s2 = mystd::status::connected;
    auto user1 = mystd::user{.s1 = mystd::status::connected, .id = 42U};

    constexpr std::uint16_t o  = faculty(5);

    return 0;

}
