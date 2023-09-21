//Matthew Reese           CS1A           Chapter 3, P. 146, #17
//
/**************************************************************
*
* COMPUTE MONTHLY LOAN PAYMENT
* ____________________________________________________________
* This program computes the monthly loan payment based on
* financial data input, then displays a financial report.
*
* Computation is based on the equation:
* Payment = (Rate * (1 + Rate) ^ N) / ((1 + Rate) ^ N - 1) * L
*   Where: Payment = Monthly Payment
*          Rate    = Monthly Interest Rate
*          N       = Number of Payments
*          L       = Loan Amount
* ____________________________________________________________
* INPUT
*    loanAmount       : Amount of the loan, in dollars
*    interestRate     : Monthly interest rate, in decimal
*    numPayments      : Number of payments
*
* OUTPUT
*    monthlyPayment   : Payment of loan each month
*    totalInterest    : Interest paid in full
*    totalPaid        : Amount paid for loan by the end
*
**************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
	using namespace std;

	float loanAmount;               // INPUT
	float interestRate;             // INPUT
	unsigned short numPayments;     // INPUT
	float monthlyPayment;           // OUTPUT
	float totalInterest;            // OUTPUT
	float totalPaid;              // OUTPUT
	float compoundVal; // Used to simplify compuatation

	// User input
	cout << "Enter the loan amount: ";
	cin >> loanAmount;
	cout << endl;
	cout << "Enter the interest rate as a percentage: ";
	cin >> interestRate;
	cout << endl;
	// Convert percentage to proportion
	interestRate /= 100; 
	cout << "Enter the number of payments: ";
	cin >> numPayments;
	cout << endl;

	// Computations
	compoundVal = pow(1 + interestRate, numPayments);
	monthlyPayment = (interestRate * compoundVal) /
		(compoundVal - 1) * loanAmount;
	totalPaid = monthlyPayment * numPayments;
	totalInterest = totalPaid - loanAmount;

	// Output financial report
	cout << endl << "Financial Report" << endl;
	cout << std::string(30, '-') << endl;
	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(20)
		<< "Loan Amount:";
	cout << "$" << right << setw(9)
		<< loanAmount << endl;

	cout << left << setw(20)
		<< "Monthly Interest:";
	cout << right << setw(9)
		<< interestRate * 100 << "%" << endl;

	cout << left << setw(20)
		<< "Number of Payments:";
	cout << right << setw(10)
		<< numPayments << endl;

	cout << left << setw(20)
		<< "Monthly Payment:";
	cout << "$" << right << setw(9)
		<< monthlyPayment << endl;

	cout << left << setw(20)
		<< "Amount Paid Back:";
	cout << "$" << right << setw(9)
		<< totalPaid << endl;

	cout << left << setw(20)
		<< "Interest Paid:";
	cout << "$" << right << setw(9)
		<< totalInterest << endl;

	return 0;
}
