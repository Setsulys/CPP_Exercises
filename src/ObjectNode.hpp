#pragma once
#include <string>
#include <map>
#include "Node.hpp"
#include "NodeKind.hpp"


class ObjectNode : public Node
{
    private:
        std::map<std::string,NodePtr> _nodes;
    public:
        ObjectNode()
        {

        }

        NodeKind kind();
        virtual std::string print() const override;
        static std::unique_ptr<ObjectNode> make_ptr();
        int child_count() const;
        void insert(std::string str,NodePtr node);
};