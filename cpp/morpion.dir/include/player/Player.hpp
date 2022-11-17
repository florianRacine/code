#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "game/Morpion.hpp"

class Player
{
    public:
        virtual Morpion move(Morpion game)=0;
    private:
        int idPlayer;
};

#endif
