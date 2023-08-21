#include <cstdint>
#include <string>
#include <string_view>

class Axe
{
public :

    Axe(const std::string &_name,
        const float _damage,
        const float _attack_speed) : name(_name), damage(_damage), attack_speed(_attack_speed){};
    ~Axe() = default;

    std::string get_name() const
{
    return name;
}

float get_damage() const
{
    return damage;
}

float get_attack_speed() const
{
    return attack_speed;
}

private :

    std::string name;
    float damage;
    float attack_speed;

};
