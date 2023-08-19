/*
HumanA and HumanB are almost the same except for these two tiny details:
• While HumanA takes the Weapon in its constructor, HumanB doesn’t.
• HumanB may not always have a Weapon, whereas HumanA will always be armed.

*/
#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weapon; 
    public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
};
