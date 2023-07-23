#pragma once

#include <string>
#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);
};
