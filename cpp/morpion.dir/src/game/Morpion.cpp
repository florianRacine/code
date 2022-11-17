#include <iostream>
#include <game/Morpion.hpp>

Morpion::Morpion() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            grid[i][j] = 0;
        }
    }
}

void Morpion::setBox(int x, int y, bool cross) {
    if (cross) {
        grid[x][y] = 1;
    } else {
        grid[x][y] = 2;
    }
}

int Morpion::getBox(int x, int y) {
    return grid[x][y];
}

bool Morpion::isPlayerWin(int idPlayer) {
    if (grid[0][0] == idPlayer && grid[0][1] == idPlayer && grid[0][2] == idPlayer) {
        return true;
    } else if (grid[1][0] == idPlayer && grid[1][1] == idPlayer && grid[1][2] == idPlayer) {
        return true;
    } else if (grid[2][0] == idPlayer && grid[2][idPlayer] == idPlayer && grid[2][2] == idPlayer) {
        return true;
    } else if (grid[0][0] == idPlayer && grid[1][0] == idPlayer && grid[2][0] == idPlayer) {
        return true;
    } else if (grid[0][1] == idPlayer && grid[1][1] == idPlayer && grid[2][1] == idPlayer) {
        return true;
    } else if (grid[0][2] == idPlayer && grid[1][2] == idPlayer && grid[2][2] == idPlayer) {
        return true;
    } else if (grid[0][0] == idPlayer && grid[1][1] == idPlayer && grid[2][2] == idPlayer) {
        return true;
    } else if (grid[0][2] == idPlayer && grid[1][1] == idPlayer && grid[2][0] == idPlayer) {
        return true;
    }
    return false;
}

bool Morpion::terminalState() {
    if (isPlayerWin(1)) {
        return true;
    } else if (isPlayerWin(2)) {
        return true;
    } else {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (grid[i][j] == 0) {
                    return false;
                }
            }
        }
        return true;
    }
}

void Morpion::celebrate() {
    if (isPlayerWin(1) == true) {
        std::cout << "Player 1 WON !!!" << std::endl;
    } else if (isPlayerWin(2) == true) {
        std::cout << "Player 2 WON !!!" << std::endl;
    } else {
        std::cout << "Pat..." << std::endl;
    }
}

void Morpion::outputGrid() {
    std::cout << std::endl << "-------" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "|";
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] == 0) {
                std::cout << " " << "|";
            } else if (grid[i][j] == 1) {
                std::cout << "x" << "|";
            } else {
                std::cout << "o" << "|";
            }
        }
        std::cout << std::endl << "-------" << std::endl;
    }
}
