#include "ArrayNode.hpp"

        NodeKind ArrayNode::kind()
        {
            return NodeKind::ARRAY;
        }

        std::string ArrayNode::print() const
        {
            std::string str ="[";
            for(unsigned i = 0; i < _nodes.size();i++)
            {
                str += _nodes.at(i) -> print();
            }
            return str + "]";
        }