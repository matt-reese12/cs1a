#include <iostream>

int recursive_power(int n, int k) {
  if(k <= 0) return 1;

  return n * recursive_power(n, k - 1);
}
int main() {
  int x, y;
  std::cout << "Input two integers: ";
  std::cin >> x >> y;
  std::cout << x << " ^ " << y << " = " << recursive_power(x, y) << std::endl;

  return 0;
}
