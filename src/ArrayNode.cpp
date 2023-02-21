#include "ArrayNode.hpp"

        NodeKind ArrayNode::kind()
        {
            return NodeKind::ARRAY;
        }

        std::string ArrayNode::print() const
        {
            return "[]";
        }