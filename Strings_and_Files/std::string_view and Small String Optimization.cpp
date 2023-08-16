#include <iostream>
#include <cstdint>
#include <string>
#include <string_view>

void *operator new(std::size_t count){ //new operator is overloaded

    if (count > 32)
        printf("allocating\n");

    return malloc(count);

}

void do_smth(const std::string &str){

    std::cout << str << "\n";

}

void do_smth1(std::string_view str){

    std::cout << str << "\n";

}

int main()
{

    std::cout << "Start SSO\n";

    //Empty string
    {
        auto emptyStr = std::string{""};
        auto size0 = sizeof(emptyStr);
        auto capacity0 = emptyStr.capacity();

        std::cout << "size0 = " << size0 << "\n";
        std::cout << "capacity0 = " << capacity0 << "\n";
    }


    //Before threshold string
    {

        auto str = std::string{15, '*'};
        auto size = sizeof(str);
        auto capacity = str.capacity();

        std::cout << "size = " << size << "\n";
        std::cout << "capacity = " << capacity << "\n";
    }

    //After threshold string

    {
        auto str1 = std::string{32, '*'};
        auto size1 = sizeof(str1);
        auto capacity1 = str1.capacity();

        std::cout << "size1 = " << size1 << "\n";
        std::cout << "capacity1 = " << capacity1 << "\n";

    }

    do_smth("Hi, my name is Jan and i am your instructor.");
    do_smth1("Hi, my name is Jan and i am your instructor.");

    return 0;

}
