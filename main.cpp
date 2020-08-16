#include <iostream>
#include "ConnectN.h"

int main(int argc, char **argv) {
    
    int numRow, numCol, winCondition;
    if(argc < 4){
        return 0;
    }
    if(argc == 4){
        std::string valid = "";
        //add for loop for argv
        valid.append(argv[1]);
        valid.append(argv[2]);
        valid.append(argv[3]);
        if(std::isdigit(std::stoi(valid))){
            return 0;
        }
        numRow = std::stoi(argv[1]);
        numCol = std::stoi(argv[2]);
        winCondition = std::stoi(argv[3]);
        ConnectNGame::ConnectN game(numRow, numCol, winCondition);
        game.play();
    }
   
    
    return 0;
}