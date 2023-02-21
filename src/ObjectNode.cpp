#include "ObjectNode.hpp"

        NodeKind ObjectNode::kind()
        {
            return NodeKind::OBJECT;
        }

        std::string ObjectNode::print() const
        {
            return "{}";
        }