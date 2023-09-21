//Matthew Reese           CS1A           Chapter 3, P. 147, #18
//
/**************************************************************
*
* CALCULATE NUMBER OF PIZZA SLICES
* ____________________________________________________________
* This program calculates the number of pizza slices based on
* the diameter of the pizza and the size of each slice.
*
* Computation is based on the formulas:
* Area = PI * (diameter / 2) ^ 2
* Slices = ⌊Area / Slice Area⌋
* ____________________________________________________________
* INPUT
*    diameter   : The diameter of the pizza, in inches
*    sliceSize  : The area a slice should be, in square inches
*
* OUTPUT
*    sliceNum   : The number of slices that may be taken from
*                 the pizza.
*
**************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
	using namespace std;

	// Named constant for pi, as per instructions...
	const float PI = M_PI;

	float diameter; // INPUT
	float sliceSize; // INPUT
	float area; // Used for computation
	float sliceNum; // OUTPUT
	
	// Initialize variable
	sliceSize = 14.125f;

	// Take user input
	cout << "Enter the diameter of the pizza, in inches: ";
	cin >> diameter;
	cout << endl; // For formatting with IDEOne
	
	// Computations
	area = PI * pow(diameter / 2, 2);
	sliceNum = area / sliceSize;

	// Output results
	cout << setprecision(1) << fixed
		<< "A " << area
		<< " square inch pizza will have about "
		<< sliceNum << " slices" << endl;
	
	return 0;
}
