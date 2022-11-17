#ifndef PLAYERIA_HPP
#define PLAYERIA_HPP

#include <game/Morpion.hpp>
#include "player/Player.hpp"
#include <iostream>

class PlayerIA : public Player
{
    public: 
        PlayerIA(int id);
        Morpion move (Morpion morpion);
        int minMax(Morpion morpion, bool maximizingPlayer);
    private:
        int idPlayer;
};

#endif
