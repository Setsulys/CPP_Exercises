#pragma once
#include <string>
#include <vector>
#include "Node.hpp"
#include "NodeKind.hpp"


class ObjectNode : public Node
{
    private:
        std::vector<Node> _nodes;
    public:
        ObjectNode()
        {

        }

        NodeKind kind();
        virtual std::string print() const override;

};