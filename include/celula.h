#pragma once
#include <iostream>
class Celula {
private:
  bool Estado_;
  unsigned int i_;
  unsigned int j_;
public:
  Celula();
  Celula(unsigned int, unsigned int);
  Celula(const Celula&);
  ~Celula();
  bool get_Estado() const;
  void set_Estado(bool);
  std::ostream& write(std::ostream&);
};