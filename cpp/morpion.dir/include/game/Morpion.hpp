#ifndef MORPION_HPP
#define MORPION_HPP

#include <game/Game.hpp>

class Morpion : public Game
{
    public:
        Morpion();
        void setBox(int x, int y, bool cross);
        int getBox(int x, int y);
        bool terminalState();
        void celebrate();
        void outputGrid();
        bool isPlayerWin(int idPlayer);
    private:
        int grid[3][3];
};

#endif
