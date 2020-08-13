CC = g++
DEV = -Wall -g -std=c++14
OPT = -03 -std=c++14

main: main.cpp Board.o ConnectN.o Move.o Player.o 
	g++ -std=c++14 main.cpp Board.o ConnectN.o Move.o Player.o -o main
Board.o: Board.cpp Board.h
	g++ -std=c++14 -c Board.cpp
ConnectN.o: ConnectN.cpp ConnectN.h Board.h Move.h
	g++ -std=c++14 -c ConnectN.cpp
Move.o: Move.cpp Move.h 
	g++ -std=c++14 -c Move.cpp
Player.o: Player.cpp Player.h Move.h
	g++ -std=c++14 -c Player.cpp
clean:
	rm -f *.o
	rm -rf *.dSYM
	rm -f main
