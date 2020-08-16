//
// Created by matth on 4/30/2019.
//
#include <iostream>
#include "Player.h"
#include "Move.h"
//fixed input for names/pieces... now to check if both users input same piece...
ConnectNGame::Player::Player() {
    bool notEmpty;
    bool notEmptyChar;
    do{
        notEmpty = checkInput();
        if(!notEmpty){
            name = tmp;
        }
    }while(notEmpty);

    do{
        notEmptyChar = true;
        if(!checkPiece()){
            notEmptyChar = false;
            piece = tmp[0];
        }
    }while(notEmptyChar);
    // piece = stringPiece[0];
    playerCount++;
}
bool ConnectNGame::Player::checkPiece() {
    std::string extra;
    bool notEmpty;
    std::cout << name << ", please enter the character you want to use for your piece: ";
    std::cin >> tmp;
    std::getline(std::cin , extra);
    if(extra.size() != 0){
        extra.clear();
        return true;
    }
    else if(tmp.size() > 1){
        return true;   
    }else if(tmp.size() == 1 && !ispunct(tmp[0])){
        return false;
    }
    return false;
}

bool ConnectNGame::Player::checkInput() {
    std::string extra;
    std::cout << "Player " << playerCount << ", please enter your name: ";
    std::cin >> tmp;
    std::getline(std::cin , extra);
    if(extra.size() != 0){
        extra.clear();
        return true;
    }
    return false;
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


