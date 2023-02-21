#pragma once
#include <string>
#include <memory>
#include "instanceCounter.hpp"

class Node : public InstanceCounter
{

    public :
        virtual std::string print() const;
};

using NodePtr = std::unique_ptr<Node>;