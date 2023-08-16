#include <iostream>
#include <cstdint>
#include <string>

void print(const std::size_t ind, const std::string &fun_nm){

    std::cout << "function : " << fun_nm << "\n";

    if(ind != std::string::npos)
        std::cout << "string found at : " << ind << "\n";
    else
        std::cout << "string not found !" << "\n";


}

int main()
{

    auto text = std::string{"Hello World!"};
    std::cout << text << "\n";

    std::cout << text.length() << "\n";
    std::cout << text.empty() << "\n";

    const auto search_str1 = "or";
    const auto ind = text.find(search_str1, 0);
    print(ind, "find");

    const auto search_str2 = "el";
    const auto ind1 = text.rfind(search_str2);
    print(ind1, "find");

    auto s1 = std::string{"jann"};
    auto s2 = std::string{"jan"};

    const auto text_search = "nn";
    const auto ind2 = s1.find(text_search, 0);
    //if(ind2 != std::string::npos)
        //s1.replace(ind2, 2, "n");
    std::cout << s1 << "\n";

    std::cout << "s1==s2 : " << std::boolalpha << (s1==s2) << "\n";
    const auto compared = s2.compare(s1);
    std::cout << "compared = " << compared << "\n";

    const auto subStr = text.substr(2, 5);
    std::cout << "sub string = " << subStr << "\n";


    //Number to string
    auto si = std::to_string(42);
    auto sl = std::to_string(42L);
    auto su = std::to_string(42u);

    //string to integer
    auto i = std::stoi("42");
    auto i1 = std::stoi("101010", nullptr, 2);
    auto i2 = std::stoi("052", nullptr, 8);
    auto i3 = std::stoi("0x2A", nullptr, 16);

    //string to double
    auto d = std::stod("123.2");
    auto d1 = std::stod("1.2345e+2");
    auto d2 = std::stod("0xF.6E6666p3");

    return 0;

}
