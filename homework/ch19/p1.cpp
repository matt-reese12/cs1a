#include <iostream>

unsigned int factorial(unsigned int n);

int main() {
  std::cout << "Please input a positive integer: ";
  unsigned int factorial_value;
  std::cin >> factorial_value;

  std::cout << factorial_value << "! = " << factorial(factorial_value) << std::endl;

  return 0;
}

unsigned int factorial(unsigned int n) {
  unsigned int result = 1;
  while(n > 1)
    result *= n--;
  return result;
}
