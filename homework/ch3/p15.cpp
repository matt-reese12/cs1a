//Matthew Reese     CS1A     Chapter 3, P. 146, #15
//
/**************************************************************
*
* GENERATE AND CHECK ADDITION PROBLEM
* ____________________________________________________________
* This program generates a random 3-digit addition problem,
* then outputs the answer after user input.
*
* Computation of each of the two random numbers is done by:
* number = 100 + rand() % 900
* ____________________________________________________________
* INPUT
* seed    : A unique value to seed the random number generator
*
* OUTPUT
* number1 : A random 3-digit number
* number2 : A random 3-digit number
* sum     : The sum of the 2 randomly generated numbers
*
**************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main() {
	using namespace std;

	int number1; // OUTPUT: random 3-digit number
	int number2; // OUTPUT: ^
	int sum;     // OUTPUT: Sum of number1 and number2
	
	time_t seed = time(nullptr); // INPUT: system time
	srand(seed); // Seed the random number generator

	// Initializing output variables
	number1 = 100 + rand() % 900;
	number2 = 100 + rand() % 900;
	sum = number1 + number2;

	// Output prompt and randomly generated numbers
	cout << "(Press <Enter> for answer)" << endl;
	cout <<        setw(5) << number1 << endl;
	cout << '+' << setw(4) << number2 << endl;
	cout << "-----";

	// Wait for user input
	cin.get();

	// Output sum
	cout << setw(5) << sum << endl;

	return 0;
}
