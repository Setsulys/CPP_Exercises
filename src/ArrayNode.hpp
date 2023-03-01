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
        static std::unique_ptr<ArrayNode> make_ptr();
        int child_count() const;
        //void push_back(NodePtr node);
};