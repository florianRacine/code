#ifndef PLAYERREAL_HPP
#define PLAYERREAL_HPP

#include <game/Morpion.hpp>
#include "player/Player.hpp"

class PlayerReal : public Player
{
    public:
        PlayerReal(int id);
        Morpion move(Morpion morpion);
    private:
        int idPlayer;
};

#endif
