#include <iostream>
#include <cstdint>
#include <chrono>

using namespace std::chrono_literals;
namespace ch = std::chrono;

int main()
{

    auto half_day = ch::hours(12);
    auto minutes  = ch::minutes(60);
    auto seconds  = ch::seconds(30);
    auto milliseconds = ch::milliseconds(500);
    auto microsecods  = ch::microseconds(500);
    auto nanoseconds  = ch::nanoseconds(500);

    auto d1 = 2020y / 1 / 15;
    auto d2 = 2020y / ch::January / 15;

    auto d3 = 15d / 1 / 2020;
    auto d4 = 15d/ ch::January / 2020;

    auto d5 = 1 / 15d / 2020;
    auto d6 = ch::January / 15d / 2020;

    auto time = ch::zoned_time{ch::current_zone(), ch::system_clock::now()};
    std::cout << time << "\n";

    auto time2 = ch::zoned_time{ch::locate_zone("Africa/Khartoum"), ch::system_clock::now()};
    std::cout << time2 << "\n";

    return 0;

}
