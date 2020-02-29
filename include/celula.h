#pragma once
#include <iostream>
class Celula {
private:
  bool Estado_;
public:
  Celula();
  bool get_Estado();
  std::ostream& write(std::ostream&);
};