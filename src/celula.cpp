
#include "../include/celula.h"
Celula::Celula ()
{
  Estado_ = true;
  i_ = 0;
  j_ = 0;
}

Celula::Celula(unsigned int i, unsigned int j)
{
  Estado_ = false;
  i_ = i;
  j_ = j;
}

Celula::Celula(const Celula& celula2)
{
  Estado_ = celula2.get_Estado();
  i_ = celula2.i_;
  j_ = celula2.j_;
}

Celula::~Celula()
{
}

bool Celula::get_Estado() const
{
  return Estado_;
}

void Celula::set_Estado(bool valor)
{
  Estado_ = valor;
}
std::ostream& Celula::write(std::ostream& os) 
{
  if (Estado_ == true)
    os << "x ";
  else
    os << "O ";
  return os;
}