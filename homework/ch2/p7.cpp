#include <iostream>

int main() {
  float oceanRisingRate = 1.5;

  std::cout << "The amount the ocean will increase in:\n"
            << "\t5 years = " << oceanRisingRate * 5 << " mm\n"
            << "\t7 years = " << oceanRisingRate * 7 << " mm\n"
            << "\t10 years = " << oceanRisingRate * 10 << " mm"
            << std::endl;
}
