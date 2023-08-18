#include <iostream>
#include <cstdint>
#include <limits>
#include <cmath>

template <typename T>
using nl = std::numeric_limits<T>;

template<typename T>
void printTypeProperties()
{

    std::cout << "min = " << nl<T>::min() << "\n"
              << "max = " << nl<T>::max() << "\n"
              << "bits = " << nl<T>::digits << "\n"
              << "decdigits = " << nl<T>::digits10 << "\n"
              << "integral = " << std::boolalpha << nl<T>::is_integer << "\n"
              << "signed = " << std::boolalpha << nl<T>::is_signed << "\n"
              << "exact = " << std::boolalpha << nl<T>::is_exact << "\n"
              << "infinity = " << std::boolalpha << nl<T>::has_infinity << "\n" << "\n";

}

template <typename T>
bool equal(const T x, const T y)
{

    return x==y;

}

template <typename T>
bool almostEqual(const T x, const T y)
{

    return ((x - y) <= nl<T>::epsilon());

}


int main()
{

    printTypeProperties<std::uint16_t>();
    printTypeProperties<std::int32_t>();
    printTypeProperties<float>();

    const auto d1 = 0.2;
    const auto d2 = 1 / (std::sqrt(5) * std::sqrt(5));

    std::cout << d1 << "\n";
    std::cout << d1 << "\n";

    std::cout.precision(17);

    std::cout << d1 << "\n";
    std::cout << d2 << "\n";

    std::cout << "d1 == d2 ?" << std::boolalpha << equal(d1, d2) << "\n";

    std::cout << "epsilon = " << nl<float>::epsilon() << "\n";
    std::cout << "d1 ~= d2 ?" << std::boolalpha << almostEqual(d1, d2) << "\n";

    return 0;

}
