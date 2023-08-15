#include <iostream>
#include <cstdint>
#include <vector>
#include <span>

template<typename T>
void print(const std::span<T> span){

    for(const auto val : span){

        std::cout << val << "\n";

    }

}

int main()
{

    auto my_vec = std::vector<std::int32_t>{1,2,3,4,5};

    auto it1 = my_vec.begin();
    auto it2 = my_vec.end();

    for(;it1!=it2;++it1){

        *it1 = 1;
    }

    print<std::int32_t>(my_vec);

    auto it3 = my_vec.rbegin();
    auto it4 = my_vec.rend();

    for(;it3!=it4;++it3){

        *it3 = 2;
    }

    print<std::int32_t>(my_vec);

    auto it5 = my_vec.begin();
    std::advance(it5,2);

    std::cout << "it5 advanced by 2" << *it5 << "\n";

    auto dist1 = std::distance(it5, my_vec.end());

    std::cout << "distance to the end of vector" << dist1 << "\n";

    std::prev(it5);

    std::cout << "previous element = " << *it5 << "\n";

    std::next(it5);

    std::cout << "next element = " << *it5 << "\n";

    return 0;

}
