#pragma once

#include <string>
#include <memory>
// A creature that is cute and can fight other ones.
class Pokemon
{
    private:
        std::string _name;
        static inline int _nextid=0;
        int _id=0;
    public:
        Pokemon(const std::string& name):
        _name {name},
        _id {_nextid++}
        {
        }

        Pokemon(const Pokemon& other):
        _name {other._name},
        _id{_nextid++}
        {
        }

        Pokemon& operator=(const Pokemon& other)
        {
            if(this == &other)
            {
                this->_name = other._name;
            }
            return *this;
        }

        const std::string name() const
        {
            return _name;
        }

        int id() const
        {
            return _id;
        }
};

using PokemonPtr = std::unique_ptr<Pokemon>;