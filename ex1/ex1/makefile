a.out: board.o main.o
	g++ board.o main.o
board.o: board.cpp board.h
	g++ -c board.cpp
main.o: main.cpp board.h
	g++ -c main.cpp
