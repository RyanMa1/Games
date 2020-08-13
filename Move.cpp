//
// Created by matth on 5/1/2019.
//

#include "Move.h"

ConnectNGame::Move::Move(const ConnectNGame::Player& maker) : maker(maker), col(-99), parsedSuccessfully(false) {

}

void ConnectNGame::Move::parseInput(std::stringstream& input) {
    //input must start out as being good
    parsedSuccessfully = static_cast<bool>(input);
    input >> col;
    //must have read col
    parsedSuccessfully = static_cast<bool>(input);
    std::string leftovers;
    input >> leftovers;
    //and we weren't able to read anything after the col
    parsedSuccessfully = parsedSuccessfully && !input;

}

bool ConnectNGame::Move::isValid(const Board& board) const {
    if(!parsedSuccessfully) {
        return false;
    }else if (!board.inBounds(col)){
        return false;
    }
    return parsedSuccessfully && board.inBounds(col) && board.isBlankSpace(col);
}

void ConnectNGame::Move::make(ConnectNGame::Board& board) {
    board.set(col, maker.getPiece());
}
