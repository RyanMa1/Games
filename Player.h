//
// Created by matth on 4/30/2019.
//

#ifndef CONNECTN_PLAYER_H
#define CONNECTN_PLAYER_H
#include <string>
#include <vector>

namespace ConnectNGame {

    class Player {

    public:
        Player();
        Player(Player& rhs);
        const std::string &getName() const;
        char getPiece() const;
        bool checkInput();
        void changeCurrentName(std::string newName);
        void changeCurrentPiece(char newPiece);
        bool checkPiece();
        bool checkName(std::string nameCheck);
        static int playerCount;
        std::string tmp;
    private:
        std::string name;
        char piece;
        std::string stringPiece;
        


    };
}


#endif //CONNECTN_PLAYER_H
