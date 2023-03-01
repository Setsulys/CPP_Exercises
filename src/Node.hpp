#pragma once
#include <string>
#include <memory>
#include "instanceCounter.hpp"

class Node : public InstanceCounter
{

    public :
        virtual std::string print() const;
        virtual ~Node(){};
};

using NodePtr = std::unique_ptr<Node>;