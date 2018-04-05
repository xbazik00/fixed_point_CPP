#include "fixed.h"

int main(){
  typedef numeric::Fixed<int32_t ,1> fixed;
  fixed a = 0.0001;
  fixed b = 0.625;
  std::cout << a * b << std::endl;
}