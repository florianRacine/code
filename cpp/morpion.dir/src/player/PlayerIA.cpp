#include <iostream>
#include <player/PlayerIA.hpp>

int INF = 1000000;

PlayerIA::PlayerIA(int id) {
    idPlayer = id;
}

Morpion PlayerIA::move(Morpion morpion) {
    int x, y;
    int valMove = -2;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (morpion.getBox(i, j) == 0) {
                Morpion child;
                for (int k = 0; k < 3; k++) {
                    for (int l = 0; l < 3; l++) {
                        if (morpion.getBox(k, l) == 1) {
                            child.setBox(k, l, true);
                        } else if (morpion.getBox(k, l) == 2) {
                            child.setBox(k, l, false);
                        }
                    }
                }
                if (idPlayer == 1) {
                    child.setBox(i, j, true);
                } else {
                    child.setBox(i, j, false);
                }
                int eval = minMax(child, false);
                if (eval > valMove) {
                    valMove = eval;
                    x = i;
                    y = j;
                }
            }
        }
    }
    std::cout << "IA Play " << x << " " << y << std::endl;
    //std::cout << "eval = " << eval << std::endl;
    if (idPlayer == 1) {
        morpion.setBox(x, y, true);
    } else {
        morpion.setBox(x, y, false);
    }
    return morpion;
}

int PlayerIA::minMax(Morpion morpion, bool maximizingPlayer) {
    if (morpion.terminalState()) {
        if (morpion.isPlayerWin(idPlayer)) {
            //morpion.outputGrid();
            return 1;
        } else if (morpion.isPlayerWin(3-idPlayer)) {
            return -1;
        } else {
            return 0;
        }
    } else if (maximizingPlayer) {
        int maxEval = -INF;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (morpion.getBox(i, j) == 0) {
                    Morpion child;
                    for (int k = 0; k < 3; k++) {
                        for (int l = 0; l < 3; l++) {
                            if (morpion.getBox(k, l) == 1) {
                                child.setBox(k, l, true);
                            } else if (morpion.getBox(k, l) == 2) {
                                child.setBox(k, l, false);
                            }
                        }
                    }
                    if (idPlayer == 1) {
                        child.setBox(i, j, true);
                    } else {
                        child.setBox(i, j, false);
                    }
                    int eval = minMax(child, false);
                    maxEval = std::max(maxEval, eval);
                }
            }
        }
        return maxEval;
    } else {
        int minEval = INF;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (morpion.getBox(i, j) == 0) {
                    Morpion child;
                    for (int k = 0; k < 3; k++) {
                        for (int l = 0; l < 3; l++) {
                            if (morpion.getBox(k, l) == 1) {
                                child.setBox(k, l, true);
                            } else if(morpion.getBox(k, l) == 2) {
                                child.setBox(k, l, false);
                            }
                        }
                    }
                    if (idPlayer == 1) {
                        child.setBox(i, j, false);
                    } else {
                        child.setBox(i, j, true);
                    }
                    int eval = minMax(child, true);
                    minEval = std::min(minEval, eval);
                }
            }
        }
        return minEval;
    }
}
