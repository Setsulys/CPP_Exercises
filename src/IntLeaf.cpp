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

        std::unique_ptr<IntLeaf> IntLeaf::make_ptr(int value)
        {
            return std::make_unique<IntLeaf>(value);
        }

        unsigned int IntLeaf::height() const
        {
            return 0;
        }

        unsigned int IntLeaf::node_count() const
        {
            return 1;
        }

