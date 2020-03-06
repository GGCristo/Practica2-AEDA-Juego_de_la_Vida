all: celula.o tablero.o
	g++ ../src/main.cpp ../build/celula.o ../build/tablero.o -o ../bin/main
run:
	./../bin/main
debug:
	g++ -g ../src/main.cpp ../src/celula.cpp ../src/tablero.cpp -o ../bin/main
clean:
	rm ../bin/* *.o
celula.o: ../src/celula.cpp ../include/celula.h
	g++ -c ../src/celula.cpp -o ../build/celula.o
tablero.o: ../src/tablero.cpp ../include/tablero.h
	g++ -c ../src/tablero.cpp -o ../build/tablero.o
