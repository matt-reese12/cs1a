#include <iostream>

int recursive_summation(int n) {
  if(n <= 0) return 0;

  return n + recursive_summation(n - 1);
}
int main() {
  int n;
  std::cout << "Input one integer to compute the summation: ";
  std::cin >> n;
  std::cout << "sum(" << n << ") = " << recursive_summation(n) << std::endl;

  return 0;
}
