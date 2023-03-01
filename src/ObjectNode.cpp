#include "ObjectNode.hpp"

        NodeKind ObjectNode::kind()
        {
            return NodeKind::OBJECT;
        }

        std::string ObjectNode::print() const
        {
            std::string separator="";
            std::string str ="{";
            for(auto it = _nodes.cbegin() ; it != _nodes.cend();it++)
            {
                str+= separator +"\"" + it->first+"\":" + it->second -> print();
                separator =",";
            }
            return str +"}";
        }

        std::unique_ptr<ObjectNode> ObjectNode::make_ptr()
        {
            return std::make_unique<ObjectNode>();
        }

        int ObjectNode::child_count() const
        {
            return _nodes.size();
        }

        void ObjectNode::insert(std::string str, NodePtr node)
        {
            _nodes.insert({str,std::move(node)});
        }

        unsigned int ObjectNode::height() const
        {
            unsigned int result =0;
            if(this->child_count()==0)
            {
                return 0;
            }
            for(const auto& child : _nodes)
            {
                unsigned int childheight = child.second->height();
                if(childheight > result)
                {
                    result = childheight;
                }
            }
            return result;
        }

        unsigned int ObjectNode::node_count()
        {
            return 1+ _nodes.size();
        }