//Matthew Reese     CS1A     Chapter 2, P. 83, #12
//
/**************************************************************
*
* CONVERT SQUARE FEET TO ACRES
* ____________________________________________________________
* This program converts a given square foot area of land to
* its equivalent area in acres.
*
* Computation is based on the formula:
* acres = squareFeet / 43,560
* ____________________________________________________________
* INPUT
*    squareFeet  : The area of land in square feet
*
* OUTPUT
*    acres       : The area of land in acres
**************************************************************/

#include <iostream>

int main() {
	int squareFeet; // INPUT
	float acres; // OUTPUT
	
	// Initialize variables
	squareFeet = 389767;
	
	// Convert square feet to acres
	acres = squareFeet / 43560.f;

	// Output result
	std::cout << squareFeet << " feet = " << 
		acres << " acres" << std::endl;
	
	return 0;
}
