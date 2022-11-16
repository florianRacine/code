#include <iostream>
#include "player/PlayerReal.hpp"

PlayerReal::PlayerReal(int idP) {
    idPlayer = idP;
}

Morpion PlayerReal::move(Morpion morpion) {
    morpion.outputGrid();
    int x = -1, y = -1;
    while (x < 0 || x > 3 || y < 0 || y > 3) {
        if (idPlayer == 1) {
            std::cout << "Enter coordonate to put your cross" << std::endl;
        } else {
            std::cout << "Enter coordonate to put your circle" << std::endl;
        }
        std::cin >> x >> y;
    }
    if (idPlayer == 1) {
        morpion.setBox(x, y, true);
    } else {
        morpion.setBox(x, y, false);
    }
    return morpion;
}
