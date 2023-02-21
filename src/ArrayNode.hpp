#pragma once
#include <string>
#include <vector>
#include "Node.hpp"
#include "NodeKind.hpp"


class ArrayNode : public Node
{
    private:
        std::vector<NodePtr> _nodes;
    public:
        ArrayNode()
        {

        }

        NodeKind kind();
        virtual std::string print() const override;

};