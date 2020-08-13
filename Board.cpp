//
// Created by matth on 4/30/2019.
//
#include <iostream>
#include "Board.h"

ConnectNGame::Board::Board(int columnSize, int rowSize) :
rowState(columnSize, std::string(rowSize, '*')),
rowLength(rowSize),
blankChar('*')
{

}

int ConnectNGame::Board::getColumnSize() const {
    return rowState.size();
}

int ConnectNGame::Board::getRowSize() const {
    return rowLength;
}

void ConnectNGame::Board::display() const {

    //print the column header
    std::cout << "  " ;
    for (int i = 0; i < getRowSize(); ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    //print row sideline header
    int rowIndex = getColumnSize()-1;
    for(const auto& row : rowState){
        std::cout << rowIndex << " ";
        for(const auto& elem : row) {
            std::cout << elem << " ";
        }
        rowIndex--;
        std::cout << std::endl;
    }
}

bool ConnectNGame::Board::inBounds(int col) const {
    return isBetween(col, 0, getRowSize()-1);
}

bool ConnectNGame::Board::isBetween(int val, int lower, int upper) {
    return val >= lower && val <= upper;
}

bool ConnectNGame::Board::isBlankSpace(int col) const {
    return rowState.at(0).at(col) == blankChar;
}

void ConnectNGame::Board::set(int col, char val) {
    int rowCounter = 0;
    for(const auto& row : rowState){
        if(rowState.at(rowCounter).at(col) != blankChar){
            rowState.at(rowCounter - 1).at(col) = val;
            break;
        }else if (rowCounter == getRowSize() - 1){
            rowState.at(rowCounter).at(col) = val;
            break;
        }
        rowCounter++;
    }
}

ConnectNGame::Board::iterator ConnectNGame::Board::begin() {
    return rowState.begin();
}

ConnectNGame::Board::iterator ConnectNGame::Board::end() {
    return rowState.end();
}

ConnectNGame::Board::const_iterator ConnectNGame::Board::cbegin() const {
    return rowState.cbegin();
}

ConnectNGame::Board::const_iterator ConnectNGame::Board::cend() const {
    return rowState.cend();
}

const char ConnectNGame::Board::getBlankChar() const {
    return blankChar;
}

const char &ConnectNGame::Board::at(int row, int col) const {
    return rowState.at(row).at(col);
}

