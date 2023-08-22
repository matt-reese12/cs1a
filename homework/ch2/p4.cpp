/* Restarant Bill
 * Write a program that computes the tax and tip on a restaurant bill for a patron with a
 * $44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
 * be 15 percent of the total after adding the tax. Display the meal cost, tax amount, tip
 * amount, and total bill on the screen.
 */
#include <iostream>

int main() {
  // Declaring variables
  float meal_charge = 44.50;
  const float TAX_PERCENTAGE = 0.0675, TIP_PERCENTAGE = 0.15;
  
  // Computing final values and assigning them to variables
  float tax_amount = meal_charge * (TAX_PERCENTAGE);
  float tip_amount = (meal_charge + tax_amount) * (TIP_PERCENTAGE);
  float total = meal_charge + tax_amount + tip_amount;

  // Displaying the computed variables to standard output
  std::cout.precision(2); std::cout << std::fixed;
  std::cout << "Meal Cost is $" << meal_charge
            << "\n\t$" << tax_amount << " tax"
            << "\n\t$" << tip_amount << " tip"
            << "\n\t$" << total << " total"
            << std::endl;

  return 0;
}
