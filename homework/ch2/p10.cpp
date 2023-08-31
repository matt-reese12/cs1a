#include <iostream>

int main() {
  unsigned short tankSize = 12;
  unsigned short milagePerTank = 350;

  float MPG = milagePerTank / static_cast<float>(tankSize);

  std::cout << "The car gets " << MPG << " miles per gallon." << std::endl;

  return 0;
}
