#include <iostream>

int main() {
  float price1 = 12.95, price2 = 24.95, price3 = 6.95, price4 = 14.95, price5 = 3.95;
  float taxProportion = 0.06;
  float subtotal = price1 + price2 + price3 + price4 + price5;
  float taxAmount = subtotal * taxProportion;
  float total = subtotal + taxAmount; 

  std::cout << "Purchase Reciept:" << std::endl
            << "\tPrice of item 1 = " << price1 << std::endl
            << "\tPrice of item 2 = " << price2 << std::endl
            << "\tPrice of item 3 = " << price3 << std::endl
            << "\tPrice of item 4 = " << price4 << std::endl
            << "\tPrice of item 5 = " << price5 << std::endl
            << "\tSubtotal = " << subtotal << std::endl
            << "\tSales tax (at 6%) = " << taxAmount << std::endl
            << "\tTotal = " << total << std::endl;
  
  return 0;
}
