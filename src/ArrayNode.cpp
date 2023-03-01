#include "ArrayNode.hpp"

        NodeKind ArrayNode::kind()
        {
            return NodeKind::ARRAY;
        }

        std::string ArrayNode::print() const
        {
            std::string separator="";
            std::string str ="[";
            for(unsigned i = 0; i < _nodes.size();i++)
            {
                str += separator+ _nodes.at(i) -> print();
                separator=",";
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

        void ArrayNode::push_back(NodePtr node)
        {   
            _nodes.push_back(std::move(node));
        }