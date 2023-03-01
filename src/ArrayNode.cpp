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

        unsigned int ArrayNode::height() const
        {
            unsigned int result =0;
            if(this->child_count()==0)
            {
                return 0;
            }

            for(const auto& child: _nodes)
            {
                unsigned int childheight = child->height();
                if(childheight > result)
                {
                    result = childheight;
                }
            }
            return result;
        }

        unsigned int ArrayNode::node_count() const
        {
            return 1 + _nodes.size();
        }