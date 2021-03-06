//
// Created by matth on 4/30/2019.
//
#include <iostream>
#include <sstream>
#include "Move.h"
#include "Board.h"
#include "ConnectN.h"
#include "Player.h"
ConnectNGame::ConnectN::ConnectN(int columnSize, int rowSize, int winCondition) :
        board(columnSize, rowSize), players(2), playerTurn(-1), winCondition(winCondition)
{
}

void ConnectNGame::ConnectN::play() {
    determineStartingPlayer();
 
//-------------------------- old ------------------------------------------

//check both char pieces
    bool askAgain;
    do{
        askAgain = checkPieces();
    }while(askAgain);

    while (true) {
           //show the game state
        board.display();
            //got move
        Move move = getValidMove();
            //made move
        move.make(board);
        if (isGameOver()) {
            break;
        }
        changeTurn();

        }
        board.display();
        declareResults();
        std::cout << "wtf jeeves you hoe" << std::endl;
    
}
bool ConnectNGame::ConnectN::checkPieces() {
    char player1Piece = players[0].getPiece();
    char player2Piece = players[1].getPiece();
    bool askAgain = false;
    if(player1Piece == player2Piece){
        // std::cout << "stuck in here" << std::endl;
        std::cout << "Please don't pick same character as " << players[0].getName() << std::endl;
        if(!players[1].checkPiece()){
            players[1].changeCurrentPiece(players[1].tmp[0]);

        }
        return true;
    }
    askAgain = false;
    return askAgain;
    
    return askAgain;
}
void ConnectNGame::ConnectN::determineStartingPlayer(){
    playerTurn = 0;
}

ConnectNGame::Move ConnectNGame::ConnectN::getValidMove() const {

    Move playerMove(getCurrentPlayer());
    do {
        std::cout << getCurrentPlayer().getName() << ", please enter a column to play in: ";
        std::string line;
        std::cin >> line;
        std::stringstream userIn(line);
        playerMove.parseInput(userIn);
    } while (!playerMove.isValid(board));
    return playerMove;

}

const ConnectNGame::Player& ConnectNGame::ConnectN::getCurrentPlayer() const {
    return players.at(playerTurn);
}

ConnectNGame::Player& ConnectNGame::ConnectN::getCurrentPlayer() {
    return players.at(playerTurn);
}

void ConnectNGame::ConnectN::changeTurn() {
    playerTurn = (playerTurn + 1) % players.size();
}

bool ConnectNGame::ConnectN::isGameOver() const {
    return gameWon() || tie();
}

bool ConnectNGame::ConnectN::gameWon() const {
    return horzWin() || vertWin() || diagWin();
}

bool ConnectNGame::ConnectN::horzWin() const {
    char prevElem;
    int same;
    for(auto rowItr = board.cbegin(); rowItr != board.cend(); ++rowItr) {

        auto elemItr = rowItr->cbegin();
        for(; elemItr != rowItr->cend(); ++elemItr) {
            if (*elemItr != board.getBlankChar() && *elemItr == prevElem) {
                same++;
                if (same == winCondition) {
                    return true;
                }
            }else {
                prevElem = *elemItr;
                same = 1;
            }
        }

    }
    return false;
}

bool ConnectNGame::ConnectN::vertWin() const {
    int same;
    char prevElem;
    for(int col = 0; col != board.getRowSize(); ++col){
        for(int row = 0; row != board.getColumnSize(); ++row) {
            if(board.at(row, col) != board.getBlankChar() && prevElem == board.at(row, col)){
                same++;
                if (same == winCondition){
                    return true;
                }
            }else{
                prevElem = board.at(row, col);
                same = 1;
            }
        }
    }
    return false;
}

bool ConnectNGame::ConnectN::diagWin() const {
    return leftDiagWin() || rightDiagWin();
}

bool ConnectNGame::ConnectN::leftDiagWin() const {
    int same;
    char prevElem;
    int row;
    int col = 0;
    for (row = board.getColumnSize() - 1; row > 0; --row) {
        for(int c = 0; c < board.getRowSize(); ++c) {
            if ((row+c) > (board.getColumnSize() -1) || (col+c) > (board.getRowSize() - 1)){
                break;
            }
            else if(board.at(row+c, col+c) != board.getBlankChar() && prevElem == board.at(row+c, col+c)) {
                same++;
                std::cout << "same = " << std::endl;
                if(same == winCondition){
                    return true;
                }
            }else{
                prevElem = board.at(row+c, col+c);
                same = 1;
            }
        }
    }
    row = 0;
    for (col = 0; col < board.getRowSize(); ++col){
        for(int c = 0; c < board.getRowSize(); c++){
            if ((row+c) > (board.getColumnSize() -1) || (col+c) > (board.getRowSize() - 1)){
                break;
            }
            else if(board.at(row+c, col+c) != board.getBlankChar() && prevElem == board.at(row+c, col+c)) {
                same++;
                std::cout << "same = " << std::endl;
                if(same == winCondition){
                    return true;
                }
            }else{
                prevElem = board.at(row+c, col+c);
                same = 1;
            }
        }
    }
    return false;
}

bool ConnectNGame::ConnectN::rightDiagWin() const {
    int same;
    char prevElem;
    int row = 0;
    int col = board.getRowSize() - 1;
    for (row = board.getColumnSize() - 1; row > 0; --row) {
        for(int c = 0; c < board.getRowSize(); ++c) {
            if ((row+c) > (board.getColumnSize() -1) || (col-c) < 0){
                break;
            }
            else if(board.at(row+c, col-c) != board.getBlankChar() && prevElem == board.at(row+c, col-c)) {
                same++;
                std::cout << "same = " << std::endl;
                if(same == winCondition){
                    return true;
                }
            }else{
                prevElem = board.at(row+c, col-c);
                same = 1;
            }
        }
    }
    row = 0;
    for (col = board.getRowSize() - 1; col > -1; --col){
        for(int c = 0; c < board.getRowSize(); c++){
            if ((row+c) > (board.getColumnSize() -1) || (col-c) < 0){
                break;
            }
            else if(board.at(row+c, col-c) != board.getBlankChar() && prevElem == board.at(row+c, col-c)) {
                same++;
                std::cout << "same = " << same << std::endl;
                if(same == winCondition){
                    return true;
                }
            }else{
                prevElem = board.at(row+c, col-c);
                same = 1;
            }
        }
    }
    return false;
}

bool ConnectNGame::ConnectN::tie() const {
    for (int i = 0; i < board.getRowSize(); ++i) {
        if(board.at(0, i) == board.getBlankChar())
            return false;
    }
    return true;
}

void ConnectNGame::ConnectN::declareResults() const {
    if(tie()){
        std::cout<< "Tie Game!" << std::endl;
    }else{
        std::cout << "in here" << std::endl;
        std::cout << getCurrentPlayer().getName() << " won the game!" << std::endl;
    }

}

int ConnectNGame::ConnectN::checkUser() {
    std::string firstName = getCurrentPlayer().getName();
    char firstPiece = getCurrentPlayer().getPiece();
    changeTurn();
    std::string secondName = getCurrentPlayer().getName();
    char secondPiece = getCurrentPlayer().getPiece();

    if (firstName == secondName) {
        return 0;
    } else if (firstPiece == secondPiece || isdigit(secondPiece)) {
        return 1;
    }
    return 2;
}


