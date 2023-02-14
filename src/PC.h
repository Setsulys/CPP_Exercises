#pragma once

#include <vector>
#include "Pokemon.h"
// A PC is the place where Pokemons get automagically sent when the trainer's pockets are full.
// When a Pokemon is transferred to the PC, this one takes ownership.
class PC
{
    private:
        std::vector<PokemonPtr> _pokemons;
    public:
        PC():
        _pokemons {std::vector<PokemonPtr>()}
        {
        }

        const std::vector<PokemonPtr>& pokemons() const
        {
            return _pokemons;
        }
        void transfer(PokemonPtr pokemon)
        {
            _pokemons.push_back(std::move(pokemon));
        }
};
