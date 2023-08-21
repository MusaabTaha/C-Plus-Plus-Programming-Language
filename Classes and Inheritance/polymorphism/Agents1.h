#pragma once

#include <iostream>
#include <string>
#include <cstdint>

class agent
{
public:

    agent(const std::string &name,
          const std::uint32_t id,
          const std::uint32_t hp = 0U,
          const std::uint32_t energy = 0U)
        : m_name(name), m_id(id), m_hp(hp), m_energy(energy)
    {
        std::cout << "Agent Constructor!" << '\n';
    };

        virtual ~agent() = default;

    virtual void print_agent_data() const
    {
        std::cout << "Agent hp: " << m_hp << ", energy: " << m_energy << '\n';
    }

protected:
    const std::string m_name;
    const std::uint32_t m_id;
    std::uint32_t m_hp = 0U;
    std::uint32_t m_energy = 0U;

};


class player : public agent
{
public:

    player(const std::string &name,
           const std::uint32_t id,
           const std::uint32_t hp = 0U,
           const std::uint32_t energy = 0U)
        : agent(name, id, hp, energy)
    {
        std::cout << "Player Constructor!" << '\n';
    }

    ~player()
    {
        std::cout << "Player Destructor!" << '\n';
    }

    void print_agent_data() const final
    {
        std::cout << "Player hp: " << m_hp << ", energy: " << m_energy << '\n';
    }

};

class NPC : public agent
{
public:
    NPC(const std::string &name,
        const std::uint32_t id,
        const std::uint32_t hp = 0U,
        const std::uint32_t energy = 0U)
        : agent(name, id, hp, energy)
    {
        std::cout << "NPC Constructor!" << '\n';
    }

    ~NPC()
    {
        std::cout << "NPC Destructor!" << '\n';
    }

    void print_agent_data() const final
    {
        std::cout << "NPC hp: " << m_hp << ", energy: " << m_energy << '\n';
    }
};
