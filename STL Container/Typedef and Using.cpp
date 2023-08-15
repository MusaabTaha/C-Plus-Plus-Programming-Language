#include <iostream>
#include <cstdint>
#include <vector>

//C-style typdef
typedef std::vector<std::int8_t> ByteArray;

//C++-style alias
template <typename T>
using vectorGenericType = std::vector<T>;


int main()
{

    return 0;
}
