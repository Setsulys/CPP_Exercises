#pragma once
#include <string>
#include "instanceCounter.hpp"

class Node : public InstanceCounter
{

    public :
        virtual std::string print() const;
};