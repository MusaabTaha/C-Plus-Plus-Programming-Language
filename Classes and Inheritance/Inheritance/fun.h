#include <string>
#include <iostream>

class AttackInterface
{
public:

    AttackInterface() = default;
    ~AttackInterface() =default;

    virtual void attack() const = 0;

};

class weapon : public AttackInterface
{

    public :

        weapon(const std::string &_name,
               const float _damage,
               const float _attack_speed,
               const bool _single_handed,
               const bool _dual_handed) : name(_name), damage(_damage), attack_speed(_attack_speed),
                                          single_handed(_single_handed), dual_handed(_dual_handed){};
        virtual ~weapon() = default;

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

        bool get_single_handed() const
        {
            return single_handed;
        }

        bool get_dual_handed() const
        {
            return dual_handed;
        }





    private :

        std::string name;
        float damage;
        float attack_speed;
        bool single_handed;
        bool dual_handed;

};

class Axe : public weapon
{
public :
    Axe(const std::string &_name, float _damage,
        float _attack_speed) : weapon(_name, _damage, _attack_speed, true, false){};
    virtual ~Axe() = default;

        virtual void attack() const final
        {
            std::cout << "Attacking with an axe\n";
        }

};

class bow : public weapon
{
public :
    bow(const std::string &_name, float _damage,
        float _attack_speed) : weapon(_name, _damage, _attack_speed, false, true){};
    virtual ~bow() = default;

            virtual  void attack() const final
        {
            std::cout << "Attacking with a longbow\n";
        }


};
