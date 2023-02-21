#include "Node.hpp"
#include <memory>

    std::string Node::print() const
        {
            return "";
        }

    using NodePtr = std::unique_ptr<Node>;