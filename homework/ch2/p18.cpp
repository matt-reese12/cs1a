//Matthew Reese     CS1A     Chapter 2, P. 84, #18
//
/**************************************************************
*
* COMPUTE DRINK CONSUMPTION STATISTICS
* ____________________________________________________________
* This program computes the number of customers who purchased
* one or more energy drinks per week, and the approximate
* number of customers who prefer citrus flavor. Both these
* values are computed based on data from a customer survey.
*
* Computating each respective value is based on the formulas:
* numCustomersOnePlus = customersSurveyed * 
*                        percentOnePlus / 100
* numCustomersCitrus  = customersSurveyed *
*                        percentCitrus  / 100
* ____________________________________________________________
* INPUT
*    customersSurveyed  : The number of customers surveyed
*    percentOnePlus     : The percentage of surveyed customers
*                         purchasing 1+ drinks per week
*    percentCitrus      : The percent of surveyed customers
*                         preferring citrus
*
* OUTPUT
*   numCustomersOnePlus : The approximate number of surveyed
*                         customers purchasing 1+ drinks/week
*   numCustomersCitrus  : The approximate number of surveyed
*                         customers preferring citrus
**************************************************************/

#include <iostream>

int main() {
	int customersSurveyed;    // INPUT
	int percentOnePlus;       // INPUT
	int percentCitrus;        // INPUT
	int numCustomersOnePlus;  // OUTPUT
	int numCustomersCitrus;   // OUTPUT
	
	// Initializing variables
	customersSurveyed = 12'467;
	percentOnePlus = 14;
	percentCitrus = 64;

	// Computing statistics
	numCustomersCitrus  = customersSurveyed *
		              (percentCitrus / 100.f);
	numCustomersOnePlus = customersSurveyed *
		              (percentOnePlus / 100.f);

	// Output results
	std::cout << "(Approximate) number of surveyed customers buying 1+ energy drinks per week:\n\t" 
		<< numCustomersOnePlus << std::endl;
	std::cout << "(Approximate) number of surveyed customers who prefer citrus flavored drinks:\n\t" 
		<< numCustomersCitrus << std::endl;

	return 0;
}
