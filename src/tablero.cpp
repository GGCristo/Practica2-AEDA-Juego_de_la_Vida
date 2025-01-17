#include <array>
#include "../include/tablero.h"

Tablero::Tablero(unsigned int n, unsigned int m): Tablero_(n, std::vector<Celula*>(m, NULL))
{
  n_ = n - 2;
  m_ = m - 2;
  for (int i = 0; i < Tablero_.size(); i++)
  {
    for (int j = 0; j < Tablero_[i].size(); j++)
    {
      Tablero_[i][j] = new Celula(i, j);
    }
  }
}
Tablero::Tablero(const Tablero& oTablero)
{
  n_ = oTablero.n_;
  m_ = oTablero.m_;
  for (int i = 0; i < oTablero.Tablero_.size(); i++)
  {
    for (int j = 0; j < oTablero.Tablero_[i].size(); j++)
    {
      this -> Tablero_[i][j] = oTablero.Tablero_[i][j];
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

std::vector<std::vector<Celula*>> Tablero::get_tablero()
{
  return Tablero_;
}

const std::vector<std::vector<Celula*>> Tablero::get_tablero() const
{
  return Tablero_;
}

void Tablero::actualizar()
{
  for (int i = 1; i <= n_;i++)
  {
    for (int j = 1; j <= m_ ; j++)
    {
      Tablero_[i][j] -> guardar_vecinos(*this);
    }
  }

  for (int i = 1; i <= n_;i++)
  {
    for (int j = 1; j <= m_ ; j++)
    {
      Tablero_[i][j] -> actualizar ();
    }
  }
}

Celula* Tablero::get_celula (unsigned int n, unsigned int m)

{
  return Tablero_[n][m];
}

Celula* Tablero::get_celula (unsigned int n, unsigned int m) const
{
  return Tablero_[n][m];
}

std::ostream& Tablero::write(std::ostream& os) const
{
  for (int k = 0; k < m_; k++)
  {
    os << " -";
  }
  os << "\n";

  for (int i = 1; i <= n_; i++)
  {
    for (int j = 1; j <= m_; j++)
    {
      os << "|" << *Tablero_[i][j];
    }
    
    os << "|\n";
    
    for (int k = 0; k < m_; k++)
    {
      os << " -";
    }
    
    os << "\n";
  }
  os << "\n";
  return os;
}

void Tablero::destruir_tablero()
{
  for (int i = 0; i < Tablero_.size(); i++)
  {
    for (int j = 0; j < Tablero_[i].size(); j++)
    {
      delete Tablero_[i][j];
    }
  }
  n_ = 0;
  m_ = 0;
}

std::ostream& operator << (std::ostream& os, const Tablero& tablero)
{
  tablero.write(os);
  return os;
}
