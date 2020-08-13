//
// Created by matth on 5/1/2019.
//

#ifndef CONNECTN_MOVE_H
#define CONNECTN_MOVE_H
#include <sstream>
#include "Player.h"
#include "Board.h"

namespace ConnectNGame {
    class Move {
    public:
        Move(const Player& maker);
        void parseInput(std::stringstream& input);
        bool isValid(const Board& board) const;
        void make(Board& board);
    private:
        const Player& maker;
        int col;
        bool parsedSuccessfully;

    };
}

#endif //CONNECTN_MOVE_H
