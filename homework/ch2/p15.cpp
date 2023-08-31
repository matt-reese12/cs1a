#include <iostream>
#include <string>

int main() {
  int numRows = 50;

  for(int row = 0; row < numRows; row++) {
    std::string rowString = std::string(numRows - row - 1, ' ');
    rowString += std::string(row * 2 + 1, '*');
    std::cout << rowString << std::endl;
  }

  return 0;
}
