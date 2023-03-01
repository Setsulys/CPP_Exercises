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
                str+= separator +"\n\t\"" + it->first+"\": \"" + it->second -> print()+"\"";
                separator =",";
            }
            return str +"}";
        }
std::unique_ptr<ObjectNode> ObjectNode::make_ptr()
{
    return std::make_unique<ObjectNode>();
}