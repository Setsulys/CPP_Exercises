#pragma once
#include <string>
enum class CardType
{
    Monster,
    Spell,
    Trap
};

std::string to_string(CardType card)
{
    switch (card)
    {
        case CardType::Monster : return "Monster";
        case CardType::Spell : return "Spell";
        case CardType::Trap : return "Trap";
        default : return "Inexistant Type";
    } 
}

class Card
{
    private:
        std::string _id;
        CardType _type;
        std::string _name;
        std::string _description;
        
    public:
        std::string _symbol;
        Card(const std::string id,CardType type):
        _id {id},
        _type {type},
        _symbol {"symbol"}
        {
            
        }

        std::string get_id() const
        {
            return _id;
        }

        CardType get_type() const
        {
            return _type;
        }

        std::string get_name() const
        {
            return _name;
        }

        std::string get_description() const
        {
            return _description;
        }

        void set_description(const std::string description)
        {
            _description = description;
        }

        void set_name(const std::string name)
        {
            _name = name;
        }

        std::string get_symbol() const
        {
            return _symbol;
        }
        
};