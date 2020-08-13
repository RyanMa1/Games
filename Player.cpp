//
// Created by matth on 4/30/2019.
//
#include <iostream>
#include "Player.h"
#include "Move.h"

ConnectNGame::Player::Player() {
    bool notEmpty;
    do{
        std::string extra;
        std::cout << "Player " << playerCount << ", please enter your name: ";
        std::cin >> name;
        std::getline(std::cin , extra);
        if(extra.size() != 0){
            extra.clear();
            notEmpty =true;
        }
        else{
            notEmpty = false;
        }
    }while(notEmpty);

    do{
        std::cout << name << ", please enter the character you want to use for your piece: ";
        std::cin >> stringPiece;
    }while(checkPiece(stringPiece));

    piece = stringPiece[0];
    playerCount++;
}

int ConnectNGame::Player::playerCount = 1;

const std::string &ConnectNGame::Player::getName() const {
    return name;
}


char ConnectNGame::Player::getPiece() const {
    return piece;
}


ConnectNGame::Player::Player(ConnectNGame::Player& rhs) : name(rhs.name), piece(rhs.piece) {

}

void ConnectNGame::Player::changeCurrentName(std::string newName) {
    name = newName;
}

void ConnectNGame::Player::changeCurrentPiece(char newPiece) {
    piece = newPiece;
}


bool ConnectNGame::Player::checkPiece(std::string stringPiece) {
    for (const char x: stringPiece){
        if(stringPiece.size() > 1 || ispunct(stringPiece[x])){
            return true;
        }
    }
    return false;
}
