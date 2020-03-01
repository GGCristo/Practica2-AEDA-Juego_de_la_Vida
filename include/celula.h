#pragma once
#include <iostream>
#include "tablero.h"
class Tablero;
class Celula {
private:
  bool Estado_;
  unsigned int i_;
  unsigned int j_;
  unsigned int vecinos_;
public:
  Celula();
  Celula(unsigned int, unsigned int);
  Celula(const Celula&);
  ~Celula();
  bool get_Estado() const;
  unsigned int get_vecinos() const;
  void set_Estado(bool);
  void guardar_vecinos(const Tablero&);
  void actualizar();
  std::ostream& write(std::ostream&);
};