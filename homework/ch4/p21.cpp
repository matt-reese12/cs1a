//Matthew Reese           CS1A           Chapter 4, P. 225, #21
//
/**************************************************************
*
* CALCULATE SHAPE AREA
* ____________________________________________________________
* This program calculates the area of a specified shape being
* either a circle, rectangle, or triangle.
*
* Calculations are based on the following geometric formulas:
* Area of Circle = PI * radius ^ 2
* Area of Rectangle = length * width
* Area of Triangle = base * height / 2
* ____________________________________________________________
* INPUT
*    choice    : Representative of the shape the user chooses
*    radius    : radius of circle, if applicable
*    length    : length of rectangle, if applicable
*    width     : width of rectangle, if applicable
*    base      : base of triangle, if applicable
*    height    : height of triangle, if applicable
*
* OUTPUT
*    area      : The area of the chosen shape
**************************************************************/

#include <iostream>
#include <cmath>

int main() {
	using namespace std;
	
	unsigned int choice;  // INPUT
	float radius;         // INPUT
	float length;         // INPUT
	float width;          // INPUT
	float base;           // INPUT
	float height;         // INPUT
	float area;           // OUTPUT
	
	// Prompt user to enter choice
	cout << "Geometry Calculator\n\n"
		<< "\t1. Calculate the area of a Circle\n"
		<< "\t1. Calculate the area of a Rectangle\n"
		<< "\t1. Calculate the area of a Triangle\n"
		<< "\t4. Quit\n\n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;
	cout << endl; // For IDEOne formatting
	
	// Process user choice
	switch (choice) {
		case 1: // Circle
			cout << "Enter the radius of the circle: ";
			cin >> radius;
			cout << endl; // For IDEOne formatting
			if (radius <= 0) {
				cout << "Radius must be a positive value!" << endl;
				break;
			}
			area = M_PI * pow(radius, 2);
			cout << "area = " << area << endl;
			break;
		case 2: // Rectangle
			cout << "Enter the length of the rectangle: ";
			cin >> length;
			cout << endl; // For IDEOne formatting
			if (length <= 0) {
				cout << "Length must be a positive value!" << endl;
				break;
			}
			cout << "Enter the width of the rectangle: ";
			cin >> width;
			cout << endl; // For IDEOne formatting
			if (width <= 0) {
				cout << "Width must be a positive value!" << endl;
				break;
			}
			area = length * width;
			cout << "area = " << area << endl;
			break;
		case 3: // Triangle
			cout << "Enter the length of the triangle's base: ";
			cin >> base;
			cout << endl; // For IDEOne formatting
			if (base <= 0) {
				cout << "Base length must be a positive value!" << endl;
				break;
			}
			cout << "Enter the length of the triangle's height: ";
			cin >> height;
			cout << endl; // For IDEOne formatting
			if (height <= 0) {
				cout << "Triangle height must be a positive value!" << endl;
				break;
			}
			area = base * height / 2;
			cout << "area = " << area << endl;
			break;
		case 4:
			cout << "Quitting program!" << endl;
			break;
		default:
			cout << "Invalid input, must be (1-4)!" << endl;
	}

	return 0;
}
