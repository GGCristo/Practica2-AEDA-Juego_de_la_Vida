#include <array>
#include "../include/tablero.h"

Tablero::Tablero(unsigned int n, unsigned int m): Tablero_(n, std::vector<Celula*>(m, NULL))
{
  n_ = n;
  m_ = m;
  for (int i = 0; i < Tablero_.size(); i++)
  {
    for (int j = 0; j < Tablero_[i].size(); j++)
    {
      Tablero_[i][j] = new Celula;
    }
  }
}

unsigned int Tablero::get_n()
{
  return n_;
}

unsigned int Tablero::get_m()
{
  return m_;
}

Celula* Tablero::get_celula (unsigned int n, unsigned int m)
{
  return Tablero_[n][m];
}

std::ostream& Tablero::write(std::ostream& os)
{
  for (int i = 0; i < Tablero_.size(); i++)
  {
    for (int j = 0; j < Tablero_[i].size(); j++)
    {
      Tablero_[i][j] -> write(os);
    }
    os << "\n";
  }
  return os;
}

void Tablero::destruir_tablero()
{
  n_ = 0;
  m_ = 0;
  for (int i = 0; i < Tablero_.size(); i++)
  {
    for (int j = 0; j < Tablero_[i].size(); j++)
    {
      delete Tablero_[i][j];
    }
  }
}