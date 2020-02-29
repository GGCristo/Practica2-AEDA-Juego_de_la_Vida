#include <iostream>
#include <cassert>
#include "../include/tablero.h"
int main (){
  
  std::cout << "Juego de la vida: " << std::endl;

  std::cout << "Numero de filas: " << "\n";
  unsigned int x;
  std::cin >> x;

  std::cout << "Numero de columnas: " << "\n";
  unsigned int y;
  std::cin >> y;

  std::cout << "¿Cuantas celulas vas a meter?" << "\n";
  unsigned int n_celulas;
  std::cin >> n_celulas;
  
  assert(x*y >= n_celulas);

  Tablero Tablero0(x, y);

  for (int i = 0; i < n_celulas; i++)
  {
    std::cout << "Celula número: " << i+1 << "\n";
    std::cout << "¿Valor de la fila?" << "\n";
    std::cin >> x;
    if (x > Tablero0.get_n())
    {
      i--;
      std::cout << "Eso esta fuera de los límites. Intentelo otra vez\n";
      continue;
    }
    std::cout << "¿Valor de la columna?" << "\n";
    std::cin >> y;
    if (y > Tablero0.get_m())
    {
      i--;
      std::cout << "Eso esta fuera de los límites. Intentelo otra vez\n";
      continue;
    }
    Tablero0.get_celula(x -1, y-1) -> set_Estado(true);
  }

  
  Tablero0.write(std::cout);
  Tablero0.destruir_tablero();
  return 0;
}
