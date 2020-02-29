
#include "../include/celula.h"

Celula::Celula()
{
  Estado_ = false;
}

bool Celula::get_Estado()
{
  return Estado_;
}

std::ostream& Celula::write(std::ostream& os)
{
  if (Estado_ == true)
    os << "x ";
  else
    os << "  ";
  return os;
}