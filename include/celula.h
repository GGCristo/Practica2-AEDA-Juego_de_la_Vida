#pragma once
#include <iostream>
class Celula {
private:
  bool Estado_;
public:
  Celula();
  ~Celula();
  bool get_Estado();
  void set_Estado(bool);
  std::ostream& write(std::ostream&);
};