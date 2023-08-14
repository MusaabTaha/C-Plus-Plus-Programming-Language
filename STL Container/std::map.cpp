#include <iostream>
#include <cstdint>
#include <string>
#include <map>

void printMap(const std::map<std::string, std::int32_t> map){

    for(const auto &[key, val] : map){

        std::cout << key << "\t=\t" << val << "\n";

    }
}

int main()
{

    auto my_map = std::map<std::string, std::int32_t>{{"hi", 32}};

    my_map["ahmed"] = 78;
    my_map["ali"] = 28;

    printMap(my_map);

    if(!my_map.contains("abbas")){

        my_map["abbas"] = 58;
    }

    printMap(my_map);

    const auto ptr = my_map.find("ahmed");

    if(ptr != my_map.end()){

        std::cout << (*ptr).first << "\n";


    }

    return 0;

}
