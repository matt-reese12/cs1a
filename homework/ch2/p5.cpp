//Matthew Reese     CS1A     Chapter 2, P. 81, #5
//
/**************************************************************
*
* COMPUTING AVERAGE
* ____________________________________________________________
* This program computes the average of inputted numbers.
*
* To compute the average, the following two formulas are used:
* sum = num1 + num2 + num3 + num4 + num5
* average = sum / 5
* ____________________________________________________________
* INPUT
*   num1    : An integer
*   num2    : An integer
*   num3    : An integer
*   num4    : An integer
*   num5    : An integer
*
* OUTPUT
*   average  : The average value of the inputs num(1-5)
**************************************************************/

#include <iostream>

int main() {
	int num1; // INPUT
	int num2; // INPUT
	int num3; // INPUT
	int num4; // INPUT
	int num5; // INPUT

	int sum; // COMPUTATION
	float average; // OUTPUT
	
	// Initialize variables
	num1 = 28;
	num2 = 32;
	num3 = 37;
	num4 = 24;
	num5 = 33;
	// Compute sum and average
	sum = num1 + num2 + num3 + num4 + num5;
	average = sum / 5.f;

	// Output result
	std::cout << "The average of "
		<< num1 << ", "  << num2 << ", " << num3 << ", "
		<< num4 << ", and " << num5 << " is "
		<< average << std::endl;

	return 0;
}
