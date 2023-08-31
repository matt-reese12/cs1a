#include <iostream>

int main() {
  double payAmount = 1700.00;
  unsigned int payPeriods = 26;
  double annualPay = payAmount * payPeriods;

  std::cout << "Annual Pay = " << annualPay << std::endl;

  return 0;
}
