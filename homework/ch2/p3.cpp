//Matthew Reese     CS1A     Chapter 2, P. 81, #3
/**************************************************************
*
* COMPUTE TOTAL SALES TAX
* ____________________________________________________________
* This program computes the total sales tax based on the
* purchase amount, in dollars, and county and state sales tax 
* percentages.
*
* Computation is based on the formula:
* totalTax = purchaseAmount * (countyTax + stateTax) / 100
* ____________________________________________________________
* INPUT
*    purchaseAmount   : The purchase amount in dollars
*    stateTax         : The state sales tax percentage
*    countyTax        : The county sales tax percentage
*
* OUTPUT
*    totalTax          : The total state and county tax owed
*
**************************************************************/

#include <iostream>

int main() {
	float purchaseAmount; // INPUT
	int stateTax;         // INPUT
	int countyTax;        // INPUT
	float totalTax;       // OUTPUT
	
	// Initialize variables
	purchaseAmount = 52.00f;
	stateTax = 4;
	countyTax = 2;

	// Compute total tax
	totalTax = purchaseAmount * (stateTax + countyTax) / 100.f;

	// Output result
	std::cout << "Total sales tax for a $" << purchaseAmount
		<< " purchase is $" << totalTax << std::endl;

	return 0;
}
