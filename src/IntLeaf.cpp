#include "IntLeaf.hpp"

        NodeKind IntLeaf::kind() const
        {
            return NodeKind::INT;
        }
        std::string IntLeaf::print() const
        {
            return std::to_string(_value);
        }

        int IntLeaf::data () const
        {
            return _value;
        }