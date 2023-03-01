#pragma once
#include <string>
#include <memory>
#include "instanceCounter.hpp"

class Node : public InstanceCounter
{

    public :
        virtual std::string print() const;
        virtual ~Node(){};
        virtual unsigned int height() const =0;
        virtual unsigned int node_count() const =0;
};

using NodePtr = std::unique_ptr<Node>;