//Matthew Reese     CS1A     Chapter 3, P. 146, #16
//
/**************************************************************
*
* COMPUTE INTEREST REPORT VALUES
* ____________________________________________________________
* This program computes the values for a financial report
* including total interest and final amount in savings based
* on the principal, interest rate, and times compounded.
 
* Computation is based on the equation:
* Final Amount = Principal * (1 + Interest Rate / T) ^ T
*   Where: T = Times Compounded
* 
* ____________________________________________________________
* INPUT
*    principal        : The initial balance in the account
*    interestRate     : The interest rate, as a percentage
*    timesCompounded  : Times interest is compounded per year
*
* OUTPUT
*    totalInterest    : Interest accumulated over 1 year
*    finalAmount      : Amount in account after 1 year
**************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
	using namespace std;

	float principal;                // INPUT
	float interestRate;             // INPUT
	unsigned short timesCompounded; // INPUT
	float totalInterest;            // OUTPUT
	float finalAmount;              // OUTPUT
	
	// User input
	cout << "Enter the principal amount: " << endl;
	cin >> principal;
	cout << "Enter the interest rate as a percentage: "
		<< endl;
	cin >> interestRate;
	cout << "Enter the times compounded per year: "
		<< endl;
	cin >> timesCompounded;

	// Computations
	finalAmount = principal + 
		pow(1 + interestRate / timesCompounded, timesCompounded);
	totalInterest = finalAmount - principal;

	// Output financial report
	cout << endl << "Financial Report" << endl;
	cout << "————————" << endl;
	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(20)
		<< "Interest Rate:";
	cout << right << setw(9)
		<< interestRate << "%" << endl;

	cout << left << setw(20)
		<< "Times Compounded:";
	cout << right << setw(9)
		<< timesCompounded << endl;

	cout << left << setw(20)
		<< "Principal:";
	cout << "$" << right << setw(8)
		<< principal << endl;

	cout << left << setw(20)
		<< "Interest:";
	cout << "$" << right << setw(8)
		<< totalInterest << endl;

	cout << left << setw(20)
		<< "Amount in Savings:";
	cout << "$" << right << setw(8)
		<< finalAmount << endl;

	return 0;
}
