all: celula.o tablero.o
	g++ ../src/main.cpp ../build/celula.o ../build/tablero.o -o ../bin/main
run:
	./../bin/main
debug:
	g++ -g ../src/main.cpp ../src/celula.cpp ../src/tablero.cpp -o ../bin/main
celula.o: ../src/celula.cpp
	g++ -c ../src/celula.cpp -o ../build/celula.o
tablero.o: ../src/tablero.cpp
	g++ -c ../src/tablero.cpp -o ../build/tablero.o
