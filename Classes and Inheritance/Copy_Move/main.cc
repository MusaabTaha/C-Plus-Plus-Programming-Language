#include <iostream>
#include <vector>
#include <cstdint>

#include "matrix.h"


int main()
{
    auto m1 = Matrix<std::int32_t>{-1,-2,-3,-4};
    auto m2 = m1;
    auto m3 = Matrix<std::int32_t>{-2,-4,-6,-8};
    m2 = m3;

    m1.print_matrix();
    m2.print_matrix();
    m3.print_matrix();

    return 0;

}
