#include <iostream>

#include "matrix1.h"

int main()
{
    auto m1 = Matrix<float>{10.0, 20.0, 50.0, 90.0};
    m1.print_matrix();

    auto m2 = Matrix<int>(-1, -2, -3, -5);
    m2.print_matrix();

    return 0;
}
