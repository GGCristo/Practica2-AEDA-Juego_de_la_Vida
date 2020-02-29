
#include "../include/celula.h"

Celula::Celula()
{
  Estado_ = false;
}

Celula::~Celula()
{
}

bool Celula::get_Estado()
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
    os << "  ";
  return os;
}