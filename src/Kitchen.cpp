#include "Kitchen.hpp"
#include "../lib/Unit.hpp"
#include "../lib/Ingredient.hpp"
#include <string>

const Unit& Kitchen::register_unit(Unit unit)
{
    auto [it,emplaced] = _units.emplace(std::move(unit));
    return *it;
}

const Unit * Kitchen::find_unit(std::string& unit_find) const
{
    auto it = _units.find(Unit{unit_find});
    if(it != _units.end())
    {
        return &(*it);
    }
    return nullptr;
}

const Ingredient& Kitchen::register_ingredient(Ingredient ingredient)
{
    auto [it,emplaced] = _ingredient.emplace(std::move(ingredient));
    return *it;   
}

const Ingredient * Kitchen::find_ingredient(std::string ingred) const
{
    for(const auto &it : _ingredient)
    {
        auto name = it.name;
        for(auto c : name)
        {
            c = tolower(c);
        }
        if(name == ingred)
        {
            return &it;
        }
    }
    return nullptr;
}