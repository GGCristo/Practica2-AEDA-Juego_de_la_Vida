all: celula.o tablero.o
	g++ ../src/main.cpp ../build/celula.o ../build/tablero.o -o ../bin/main
run:
	./../bin/main
celula.o:
	g++ -c ../src/celula.cpp -o ../build/celula.o
tablero.o:
	g++ -c ../src/tablero.cpp -o ../build/tablero.o