#include <iostream>
#include <cstdint>

template <typename T>//alias name
struct is_numeric :
    public std::disjunction<std::is_integral<T>, std::is_floating_point<T>>
{
    /* data */
};


template<typename T>
auto max1(const T &A, const T &B)
{

    static_assert(std::disjunction_v<std::is_integral<T>, std::is_floating_point<T>>,"fail");

    return (A < B)? B : A;
}

template<typename T>
auto max2(const T &A, const T &B)
{

    static_assert(is_numeric<T>::value, "fail");

    return (A < B)? B : A;

}

template<typename T, typename U>
auto max3(const T &A, const U &B)
{

    static_assert(std::conjunction_v<is_numeric<T>, is_numeric<U>>,"fail");

    return (A < B)? B : A;

}

int main()
{

    std::cout << max1(10, 11) << std::endl;
    std::cout << max1(10.0F, 11.0F) << std::endl;
    std::cout << max1(10.0, 11.0) << std::endl;
    std::cout << max1<short>(10, 11) << std::endl;

    std::cout << max2(10, 11) << std::endl;
    std::cout << max2(10.0F, 11.0F) << std::endl;
    std::cout << max2(10.0, 11.0) << std::endl;
    std::cout << max2<short>(10, 11) << std::endl;

    std::cout << max3(10, 11.0) << std::endl;

    return 0;

}
