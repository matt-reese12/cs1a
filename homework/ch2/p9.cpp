#include <iostream>

int main() {
  std::cout << "char stores " << sizeof(char) << " bytes" << std::endl
            << "int stores " << sizeof(int) << " bytes" << std::endl
            << "float stores " << sizeof(float) << " bytes" << std::endl
            << "double stores " << sizeof(double) << " bytes" << std::endl;
  return 0;
}
