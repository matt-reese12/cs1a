#include <iostream>

int ackermann_fn(int m, int n) {
  if(!m) return n + 1;
  if(!n) return ackermann_fn(m - 1, 1);
  return ackermann_fn(m - 1, ackermann_fn(m, n - 1));
}

int main() {
  int m, n;
  std::cout << "Input two values for Ackermann's function: ";
  std::cin >> m >> n;
  std::cout << "A(" << m << "," << n << ") = " << ackermann_fn(m, n) << std::endl;

  return 0;
}
