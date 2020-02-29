#pragma once
#include <vector>
#include "celula.h"

class Tablero {
  private:
    std::vector<std::vector<Celula*>> Tablero_;
    unsigned int n_;
    unsigned int m_;
  public:
    Tablero(unsigned int = 20, unsigned int = 20);
    Celula* celula (unsigned int, unsigned int);
    std::ostream& write(std::ostream&);
};