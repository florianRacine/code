#include <iostream>

#include <game/Game.hpp>
#include <game/Morpion.hpp>
#include <player/Player.hpp>
#include <player/PlayerReal.hpp>
#include <player/PlayerIA.hpp>

/*
 * __  __       _         ____                                      
 *|  \/  | __ _(_)_ __   |  _ \ _ __ ___   __ _ _ __ __ _ _ __ ___  
 *| |\/| |/ _` | | '_ \  | |_) | '__/ _ \ / _` | '__/ _` | '_ ` _ \
 *| |  | | (_| | | | | | |  __/| | | (_) | (_| | | | (_| | | | | | |
 *|_|  |_|\__,_|_|_| |_| |_|   |_|  \___/ \__, |_|  \__,_|_| |_| |_|
 *
 */

int main() {
    PlayerIA player1(1);
    PlayerReal player2(2);
    Morpion morpion;
    bool isPlayer1ToPlay = true;
    while (morpion.terminalState() == false) {
        if (isPlayer1ToPlay) {
            morpion = player1.move(morpion);
            isPlayer1ToPlay = false;
        } else {
            morpion = player2.move(morpion);
            isPlayer1ToPlay = true;
        }
    }
    morpion.outputGrid();
    morpion.celebrate();
    return 0;
}
