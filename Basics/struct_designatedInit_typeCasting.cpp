#include <iostream>
#include <cstdint>

enum class status {

    unknown,
    connected,
    disconnected,

};

struct user{

    status s1;
    std::uint32_t id;

};

int main()
{

    //user user1 = {status::connected, 42U};
    user user1 = {.s1 = status::connected, .id = 42U}; //c++20 structure initialization"designeted intialize list"

    std::cout << user1.id << "\n";

    std::cout << (std::uint32_t)user1.s1 << "\n"; //c approach type casting
    std::cout << static_cast<std::uint32_t>(user1.s1) << "\n";//c++ approach type casting

    return 0;
}
