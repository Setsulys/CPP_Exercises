#pragma once
#include "../lib/Unit.hpp"
#include "../lib/Ingredient.hpp"
#include <string>
#include <set>
#include <optional>

struct comparator{
    bool operator() (const Unit& unit1,const Unit& unit2) const
    {
        return unit1.name < unit2.name;
    }
    
    bool operator()(const Ingredient& ing1,const Ingredient& ing2) const
    {
        return ing1.name <ing2.name;
    }
};

class Kitchen
{   
    private:
        std::set<Unit,comparator> _units;
        std::set<Ingredient,comparator> _ingredient;
    public:
        const Unit& register_unit(Unit unit);

        const Unit* find_unit(std::string& unit_find) const;

        const Ingredient& register_ingredient(Ingredient ingredient);
        
        const Ingredient* find_ingredient(std::string ingred)const;

};
