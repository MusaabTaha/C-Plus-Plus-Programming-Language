#include <iostream>
#include <cstdint>

#include "weapons1.h"

int main()
{

    const auto axe = Axe{"coco", 10.5F, 15.8F};
    std::cout << axe.get_name() << "\n";

    return 0;
}
