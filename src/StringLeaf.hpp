#pragma once

#include <iostream>
#include <string>
#include "Leaf.hpp"
#include "NodeKind.hpp"


class StringLeaf : public Leaf
{
    private :
        std::string _value;
    public:
        StringLeaf(std::string value):
        _value {value}
        {

        }
        NodeKind kind() const;
        virtual std::string print() const override;
        std::string data () const;

        
};
