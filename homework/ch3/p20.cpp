//Matthew Reese           CS1A           Chapter 3, P. 147, #20
//
/**************************************************************
*
* CALCULATE TRIGONOMETRIC FUNCTIONS
* ____________________________________________________________
* This program computes the sine, cosine and tangent functions
* of a given angle, then displays those results to stdout.
* 
* Computation is based on the following std library functions:
* sin(angle) - sine
* cos(angle) - cosine
* tan(angle) - tangent
* ____________________________________________________________
* INPUT
*    angle    : an angle, given in radians
*
* OUTPUT
*    sine     : sine value, computed for the given angle
*    cosine   : cosine value, computed for the given angle
*    tangent  : tangent value, computed for the given angle
*
**************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
	using namespace std;

	float angle;   // INPUT
	float sine;    // OUTPUT
	float cosine;  // OUTPUT
	float tangent; // OUTPUT

	// Take user input
	cout << "Please input an angle in radians: ";
	cin >> angle;
	cout << endl;

	// Map the angle to [0, 2*PI] for cleaner output
	// this conserves the same output based on definition
	// of trigonometric funnctions.
	angle = fmod(angle, 2 * M_PI);

	// Initialize variables
	sine = sin(angle);
	cosine = cos(angle);
	tangent = tan(angle);

	// Output results
	cout << setprecision(4) << fixed
		<< showpoint << right << showpos
		<< "sin(" << angle << ") = "
		<< setw(7) << sine << endl
		<< "cos(" << angle << ") = "
		<< setw(7) << cosine << endl
		<< "tan(" << angle << ") = "
		<< setw(7) << tangent << endl;

	return 0;
}
