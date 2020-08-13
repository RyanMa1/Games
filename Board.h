//
// Created by matth on 4/30/2019.
//

#ifndef CONNECTN_BOARD_H
#define CONNECTN_BOARD_H
#include <vector>
#include <string>

namespace ConnectNGame {
    class Board {
    public:
        using iterator = std::vector<std::string>::iterator;
        using const_iterator = std::vector<std::string>::const_iterator;
        explicit Board(int columnSize, int rowSize);
        int getColumnSize() const;
        int getRowSize() const;
        void display() const;
        bool inBounds(int col) const;
        bool isBlankSpace(int col) const;
        void set(int col, char val);
        iterator begin();
        iterator end();
        const_iterator cbegin() const;
        const_iterator cend() const;
        const char& at(int row, int col) const;
        const char getBlankChar() const;

    private:
        static bool isBetween(int val, int lower, int upper);

    private:
        std::vector<std::string> rowState;
        int rowLength;
        const char blankChar = '*';


    };
}


#endif //CONNECTN_BOARD_H
