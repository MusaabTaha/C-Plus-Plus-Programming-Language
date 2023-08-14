#include <iostream>
#include <cstdint>
#include <vector>

int main()
{

    auto my_vec = std::vector<std::int32_t>{1,2,3,4,5};

    //C-style for loop
    for(std::size_t i = 0; i<my_vec.size();i++){

        std::cout << my_vec[i] << "\n";

    }

    //C++-style for loop
    //const if i want only to read it
    for(const auto value : my_vec){

        std::cout << value << "\n";

    }

    //vector constructor, reserve 10 slots in heap and initialize them to 0
    auto my_vec2 = std::vector<std::int32_t>(10,0);

    for(const auto value : my_vec2){

        std::cout << value << "\n";
    }
    //initialize vector to zero
    auto my_vec3 = std::vector<std::int32_t>{};

    my_vec3.push_back(10);
    my_vec3.push_back(22);
    for (const auto value : my_vec3)
    {
        std::cout << value << "\n";
    }

    my_vec3.pop_back();
    for (const auto value : my_vec3)
    {
        std::cout << value << "\n";

    }

    //begin and end iterators

    auto begin_ptr = my_vec2.begin();
    auto end_ptr   = my_vec2.end();

    for(begin_ptr; begin_ptr != end_ptr; begin_ptr++){

        std::cout << *begin_ptr << "\n";

    }

    my_vec2.insert(my_vec2.begin() + 3,100);

    for(const auto value : my_vec2){

        std::cout << value << "\n";

    }

    return 0;

}
