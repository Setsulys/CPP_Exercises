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

        std::unique_ptr<ArrayNode> ArrayNode::make_ptr()
        {
            return std::make_unique<ArrayNode>();
        }

        int ArrayNode::child_count() const
        {
            return _nodes.size();
        }

        // void ArrayNode::push_back(NodePtr node)
        // {
        //     _nodes.push_back(node);
        // }