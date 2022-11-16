#include <iostream>
#include "player/PlayerReal.hpp"

/*
 * __  __       _         ____                                      
 *|  \/  | __ _(_)_ __   |  _ \ _ __ ___   __ _ _ __ __ _ _ __ ___  
 *| |\/| |/ _` | | '_ \  | |_) | '__/ _ \ / _` | '__/ _` | '_ ` _ \
 *| |  | | (_| | | | | | |  __/| | | (_) | (_| | | | (_| | | | | | |
 *|_|  |_|\__,_|_|_| |_| |_|   |_|  \___/ \__, |_|  \__,_|_| |_| |_|
 *
 */

int main() {
    PlayerReal realPlayer1(1);
    PlayerReal realPlayer2(2);
    Morpion morpion;
    bool isPlayer1ToPlay = true;
    while (morpion.terminalState() == false) {
        if (isPlayer1ToPlay) {
            morpion = realPlayer1.move(morpion);
            isPlayer1ToPlay = false;
        } else {
            morpion = realPlayer2.move(morpion);
            isPlayer1ToPlay = true;
        }
    }
    morpion.outputGrid();
    morpion.celebrate();
    return 0;
}
