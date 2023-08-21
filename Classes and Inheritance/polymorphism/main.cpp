#include <iostream>
#include <string>
#include <vector>

#include "Agent1.h"

void printAllAgents(const std::vector<agent *> &agents){

    for(const auto val : agents)
    {

        val->print_agent_data();

    }

}

int main()
{

    auto agent1 = agent{"A1", 0, 100, 25};
    auto player1 = player{"p1", 5, 170, 65};
    auto npc1 = NPC{"N1", 3, 150, 95};

    const auto vec = std::vector<agent *>{&agent1, &player1, &npc1};

    printAllAgents(vec);

    return 0;

}
