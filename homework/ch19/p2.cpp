#include <iostream>

void sign(int);

int main() {
  int spots;
  std::cout << "Please input the number of spots: ";
  std::cin >> spots;
  sign(spots);
}

void sign(int n) {
  if(!n) return;
  std::cout << "No Parking" << std::endl;
  sign(n-1);
}
