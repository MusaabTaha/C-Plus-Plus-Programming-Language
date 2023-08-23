#include <iostream>
#include <string>
#include <string_view>
#include <vector>


//template specialization

template <typename T>
std::size_t length(const std::vector<T> &vec)
{

    return vec.size();

}

template <>
std::size_t length(const std::vector<std::string> &str)
{

    auto l = std::size_t{};

    for (const auto &s : str)
    {
        l += s.size();
    }

    return l;

}


int main()
{

    const auto vec = std::vector<int>{1, 2, 3};
    std::cout << length(vec) << "\n";

    const auto str = std::vector<std::string>{"11","13","15"};
    std::cout << length(str) << "\n";

    return 0;
}
