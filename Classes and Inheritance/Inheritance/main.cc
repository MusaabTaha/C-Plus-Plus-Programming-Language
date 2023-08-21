#include <iostream>
#include <cstdint>

#include "weapons1.h"

int main()
{

    const auto axe = Axe{"Great dwarfen axe", 12.0F, 1.2F};
    const auto longbow = bow{"Bow of the emperer", 25.0F, 0.5F};

    axe.attack();
    longbow.attack();

    return 0;

}
