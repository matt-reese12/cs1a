//Matthew Reese          CS1A Chapter 2, P. 82, #9
//
/**************************************************************
*
* WRITE DATA SIZES TO SCREEN
* ____________________________________________________________
* This program accesses the size of the types char, int,
* float, and double in bytes, based on values predefined 
* by the compiler. These sizes are then outputed.
*
* Sizes of each type are accessed using the built-in operator:
* sizeof(type)
* ____________________________________________________________
* INPUT
*    charSize      : size of a char, in bytes
*    intSize       : size of an int, in bytes
*    floatSize     : size of a float, in bytes
*    doubleSize    : size of a double, in bytes
*
* OUTPUT
*    charSize      : size of a char, in bytes
*    intSize       : size of an int, in bytes
*    floatSize     : size of a float, in bytes
*    doubleSize    : size of a double, in bytes
*
**************************************************************/
#include <iostream>
 
int main() {
	size_t charSize = sizeof(char); // INPUT: size in bytes of char
	size_t intSize = sizeof(int); // INPUT: size in bytes of int
	size_t floatSize = sizeof(float); // INPUT: size in bytes of float
	size_t doubleSize = sizeof(double); // INPUT: size in bytes of double
 
	// OUTPUT: the sizes as accessed above
    std::cout << "char stores " << charSize << " bytes" << std::endl
			<< "int stores " << intSize << " bytes" << std::endl
			<< "float stores " << floatSize << " bytes" << std::endl
			<< "double stores " << doubleSize << " bytes" << std::endl;
 
	return 0;
}
