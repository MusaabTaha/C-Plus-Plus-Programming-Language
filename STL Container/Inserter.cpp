#include <iostream>
#include <cstdint>
#include <vector>

void print(const std::vector<std::int32_t> &vec){

    for(const auto val : vec){

        std::cout << val << "\n";

    }

}

int main()
{

    auto my_vec = std::vector{1,2,3,4,5};
    auto my_vec1 = std::vector<std::int32_t>{};
    auto my_vec2 = std::vector<std::int32_t>{-1, -2};
    auto my_vec3 = std::vector<std::int32_t>{-3, -6};

    std::copy(my_vec.begin(), my_vec.end(), std::inserter(my_vec1, my_vec1.begin()));

    print(my_vec1);

    std::copy(my_vec.begin(), my_vec.end(), std::inserter(my_vec2, std::next(my_vec2.begin())));

    print(my_vec2);

    std::copy(my_vec.begin(), my_vec.end(), std::back_inserter(my_vec3));

    print(my_vec3);


    return 0;

}
