#include <iostream>
#include <cstdint>
#include <concepts>

template <typename T>
concept Addable = requires(T x)
{

    x + x;

};

template <typename T>
concept nonNumeric = !std::integral<T> && !std::floating_point<T>;

template <typename T>
concept conCat = Addable<T> && nonNumeric<T>;

template <typename T>
requires conCat<T> T conCating(T first, T sec)
{
    return first + sec;

}



int main()
{

    const auto s1 = std::string{"Hel"};
    const auto s2 = std::string{"lo"};

    std::cout << conCating(s1, s2) << std::endl;
    // std::cout << concat(1, 2) << std::endl;
    return 0;
}
