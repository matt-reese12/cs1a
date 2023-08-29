#include <iostream>

int recursive_multiply(int n, int k) {
  if(k <= 0) return 0;

  return n + recursive_multiply(n, k - 1);
}
int main() {
  int x, y;
  std::cout << "Input two integers to multiply: ";
  std::cin >> x >> y;
  std::cout << x << " * " << y << " = " << recursive_multiply(x, y) << std::endl;

  return 0;
}
