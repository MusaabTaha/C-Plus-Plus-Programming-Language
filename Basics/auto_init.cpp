#include <iostream>
#include <cstdint>

enum class status{

    unknowm,
    connected,
    disconnected,

};

struct user{

    status s1;
    std::uint32_t id;

};

int main()
{

    float a = 12.0F;
    std::uint32_t b = a; //will compile but not recommended

    auto c = std::uint32_t{a}; //will not compile because of auto
    auto c = static_cast<std::uint32_t>(a); //will compile because of type casting

    return 0;
}
