/* Sales Prediction
 *   The East Coast sales division of a company generates 62 percent of total sales. Based
 *   on that percentage, write a program that will predict how much the East Coast division 
 *   will generate if the company has $4.6 million in sales this year.
 */
#include <iostream>

int main() {
  // Declaring variables
  float revenue = 4'600'000;
  const float EAST_COAST_FRACTION = 0.62;

  // Calculation and printing output
  std::cout << "$4.6 Million in sales and East Coast Generated 62%"
            << "\n-> East Coast Generated $" << revenue * EAST_COAST_FRACTION << std::endl;

  return 0;
}
