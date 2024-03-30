#pragma once

#include <iostream>
#include <string>

struct Data
{
    int id;
    std::string dataString;
};

class Serializer
{
public:
    static unsigned long serialize(Data *ptr);
    static Data *deserialize(unsigned long raw);
};
