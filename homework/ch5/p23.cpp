//Matthew Reese           CS1A           Chapter 5, P. 298, #23
//
/**************************************************************
*
* DISPLAY PATTERNS
* ____________________________________________________________
* This program displays two right-triangle patterns A and B
* with specified heights and characters.
*
* computation
* ____________________________________________________________
* INPUT
*    triangleHeight   : The height of each triangle
*    displayChar      : Character to use to display triangles
*
* OUTPUT
*    Two right triangles with height = triangleHeight and
*    display character = displayChar.
**************************************************************/

#include <iostream>

int main() {
	using namespace std;
	
	// Initializing constants
	const int TRIANGLE_HEIGHT = 10; // INPUT
	const char DISPLAY_CHAR = '+';  // INPUT
	
	// Display pattern A
	cout << "PATTERN A:" << endl;
	for (int row = 1; row <= TRIANGLE_HEIGHT; row++) {
		cout << string(row, DISPLAY_CHAR) << endl;
	}
	// Display pattern B
	cout << "PATTERN B:" << endl;
	for (int row = TRIANGLE_HEIGHT; row > 0; row--) {
		cout << string(row, DISPLAY_CHAR) << endl;
	}

	return 0;
}
