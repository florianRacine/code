#include "player/Player.hpp"

class PlayerReal : public Player
{
    public:
        PlayerReal(int idP);
        Morpion move(Morpion morpion);
    private:
        int idPlayer;
};
