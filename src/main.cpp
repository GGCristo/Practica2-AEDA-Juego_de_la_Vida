#include <iostream>
#include <cassert>
#include "../include/tablero.h"
int main (){
  
  std::cout << "Juego de la vida: " << std::endl;

  // std::cout << "¿Cuantas celulas vas a meter?" << "\n";
  // unsigned int n_celulas;
  // std::cin >> n_celulas;

  std::cout << "Numero de filas: " << "\n";
  unsigned int x;
  std::cin >> x;

  std::cout << "Numero de columnas: " << "\n";
  unsigned int y;
  std::cin >> y;
  
  // assert(x*y >= n_celulas);
  std::cout << "Antes de crear tablero\n";
  Tablero Tablero0(x, y);
  std::cout << "Despues de crear tablero\n";
  Tablero0.write(std::cout);
  return 0;
}
