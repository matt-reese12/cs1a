#include <iostream>
#include <string>

int main() {
  int baseWidth = 7;

  for(int row = 0; row < (baseWidth / 2) + 1; row++) {
    std::string rowString = std::string(baseWidth / 2 - row, ' ');
    rowString += std::string(row * 2 + 1, '*');
    std::cout << rowString << std::endl;
  }
  for(int row = (baseWidth / 2) + 1; row < baseWidth; row++) {
    std::string rowString = std::string(row - baseWidth / 2, ' ');
    rowString += std::string(((baseWidth / 2) - row) * 2 + 1, '*');
    std::cout << rowString << std::endl;
  }

  return 0;
}
