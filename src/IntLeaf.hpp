#pragma once

#include <iostream>
#include <string>
#include "Leaf.hpp"
#include "NodeKind.hpp"


class IntLeaf : public Leaf
{
    private :
        int _value;
    public:
        IntLeaf(int value):
        _value {value}
        {

        }

        NodeKind kind() const;
        virtual std::string print() const override;
        int data () const;

        
};
