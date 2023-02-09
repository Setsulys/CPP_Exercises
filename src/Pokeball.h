#pragma once

#include "Pokemon.h"
// A ball where a Pokemon sleeps.
class Pokeball
{
    private:
        bool _empty;
        PokemonPtr _pokeptr;
    public:
        Pokeball():
        _empty {true}
        {

        }

        bool empty() const
        {
            return _empty;
        }
        void store(PokemonPtr pokemon)
        {
            _pokeptr = std::move(pokemon); 
            _empty = false;
        }

        Pokemon& pokemon()
        {
            return *_pokeptr; 
        }
};
