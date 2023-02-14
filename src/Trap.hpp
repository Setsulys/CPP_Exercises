#pragma once
#include <string>
#include "Card.hpp"

enum class TrapType
{
    Normal,
    Continuous,
    Counter
};

std::string to_string(TrapType trap)
{
    switch(trap)
    {
        case TrapType::Normal : return "Normal";
        case TrapType::Continuous : return "Continuous";
        case TrapType::Counter : return "Counter";
        default : return "Inexistant trap type";
    }
}


class Trap : public Card
{
    private:
        TrapType _type;
    public:
        Trap(const std::string id,const std::string name,TrapType type):
        Card(id,CardType::Trap),
        _type {type}
        {
            set_name(name);
            _symbol =u8"罠";
        }

        TrapType get_trap_type() const
        {
            return _type;
        }
};