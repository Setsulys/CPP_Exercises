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
        static std::unique_ptr<IntLeaf> make_ptr(int value);
        unsigned int height() const;
        unsigned int node_count() const;

        
};
