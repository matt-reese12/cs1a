/* Sales Tax
 *   Write a program that will compute the total sales tax on a $52 purchase. Assume the
 *   state sales tax is 4 percent and the county sales tax is 2 percent.
 */
#include <iostream>

int main() {
  // Declaring variables
  float purchase_amount = 52.;
  const float STATE_TAX = 0.04, COUNTY_TAX = 0.02;

  // Compute and print result
  std::cout << "$52 purchase with " << (STATE_TAX + COUNTY_TAX) * 100 << "% tax is $"
            << purchase_amount * (1 + STATE_TAX + COUNTY_TAX)
            << " total." << std::endl;

  return 0;
}
