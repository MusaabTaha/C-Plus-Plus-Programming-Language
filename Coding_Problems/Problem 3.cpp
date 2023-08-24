/*You will be given an array of  integers and you have to print the integers in the reverse order.*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <array>
#include <cstdint>
#include <iterator>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    auto arrLength = std::size_t{0U};
    auto arr       = std::vector<std::int32_t>{0U};


    std::cin >> arrLength;
    
    auto ptr = new std::int32_t[arrLength];
    
    auto var = std::int32_t(arrLength-1);
    
    for(std::size_t i = 0; i<arrLength;i++){
        
        std::cin >> ptr[i];
        
    }
    
    
    for(std::size_t i = 0; i<arrLength;i++){
        
        std::cout << ptr[var - i] << " ";
        
    }

    return 0;

}
