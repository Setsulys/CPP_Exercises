#pragma once
#include <string>
#include "Card.hpp"
enum class SpellType
{
    Normal,
    Equip,
    Continuous,
    QuickPlay,
    Field
};

std::string to_string(SpellType spell)
{
    switch(spell)
    {
        case SpellType::Normal : return "Normal";
        case SpellType::Equip : return "Equip";
        case SpellType::Continuous : return "Continuous";
        case SpellType::QuickPlay : return "Quick-Play";
        case SpellType::Field : return "Field";
        default : return "Inexistant Spell Type";
    }
}

class Spell : public Card
{
    private:
        SpellType _spell;

    public: 
        Spell(const std::string id,const std::string name, SpellType spell):
        Card(id,CardType::Spell),
        _spell {spell}
        {
            set_name(name);
            _symbol =u8"魔";
        }

        SpellType get_spell_type() const
        {
            return _spell;
        }

};