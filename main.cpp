#include <iostream>
#include "ConnectN.h"

int main(int argc, char **argv) {

    int numRow, numCol, winCondition;
    numRow = std::stoi(argv[1]);
    numCol = std::stoi(argv[2]);
    winCondition = std::stoi(argv[3]);

    ConnectNGame::ConnectN game(numRow, numCol, winCondition);
    game.play();
    return 0;
}