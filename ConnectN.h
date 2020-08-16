//
// Created by matth on 4/30/2019.
//

#ifndef CONNECTN_CONNECTN_H
#define CONNECTN_CONNECTN_H
#include <vector>
#include "Board.h"
#include "Player.h"
#include "Move.h"

namespace ConnectNGame {
    class ConnectN {

    public:
        explicit ConnectN(int columnSize, int rowSize, int winCondition);
        ConnectN();
        ConnectN(const Board &board);
        virtual ~ ConnectN() = default;
        void play();
        int checkUser();
        void determineStartingPlayer();
        Move getValidMove() const;
        const Player& getCurrentPlayer() const;
        Player& getCurrentPlayer();
        bool checkPieces();
        bool isGameOver() const;
        bool gameWon() const;
        bool horzWin() const;
        bool vertWin() const;
        bool diagWin() const;
        bool leftDiagWin() const;
        bool rightDiagWin() const;
        bool tie() const;
        void changeTurn();
        void declareResults() const;

    private:
        Board board;
        std::vector<Player> players;
        int playerTurn;
        int winCondition;

    };
}


#endif //CONNECTN_CONNECTN_H
