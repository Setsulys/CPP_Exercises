#include "StringLeaf.hpp"


        NodeKind StringLeaf::kind() const
        {
            return NodeKind::STRING;
        }
        std::string StringLeaf::print() const
        {
            return '"'+_value+'"';
        }

        std::string StringLeaf::data ()const
        {
            return _value;
        }

        std::unique_ptr<StringLeaf> StringLeaf::make_ptr(std::string value)
        {
            return std::make_unique<StringLeaf>(value);
        }

        unsigned int StringLeaf::height() const
        {
            return 0;
        }

        unsigned int StringLeaf::node_count() const
        {
            return 1;
        }