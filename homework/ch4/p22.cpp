//Matthew Reese           CS1A           Chapter 4, P. 225, #22
//
/**************************************************************
*
* CALCULATE LONG-DISTANCE CALL COST
* ____________________________________________________________
* This program computes the price of a long-distance phone
* call based on the amount that the cell carrier charges at
* different times, the time the call began, and the number
* of minutes the call took.
*
* Calculation of cost is based on the following formula, 
* for each time period:
*  Cost = Minutes Spent * Current Rate
* To determine if variable is in a range [min, max]:
*  In Range (Boolean) = x >= min AND x <= max
* Calculation of time spent in a given period is based on
* formulas computed in the table below:
*
* ____________________________________________________________
* INPUT
*    startingTimeMin    : Time that the call starts, in minutes
*                         from 00:00
*    minutesSpent       : Minutes spent on the call
*         NOTE: No defined upper bound for minutesSpent
*    Charge Rates       : Rate, in dollars/minute, for calls
*                         during defined time periods
*    Start Times        : The start times of each respective
*                         charge rate, in minutes from 00:00
*
* OUTPUT
*    cost               : Total cost, in dollars, of the call
**************************************************************/

#include <iostream>
#include <iomanip>

int main() {
	using namespace std;

	unsigned short startingTime;  // INPUT
	unsigned short minutesSpent;  // INPUT
	float cost;                   // OUPUT
	// Variables used for calculations:
	unsigned short morningTimeTotal,
		       middayTimeTotal,
		       nightTimeTotal;
	// Time call ends in day, starting from 00:00
	// Based on startingTime and minutes spent
	unsigned short endingTime;
	// The number of minutes the call takes place in
	// each respective time period, disregarding any
	// minutes > 24 hours.
	unsigned short morningMins,
		       middayMins,
		       nightMins;

	// Input buffers for startingTime 
	float timeInputBuf; 
	unsigned short minutesBuf, hoursBuf;
	
	// Declare and initialize constant variables
	const int DAY_MINUTES =
		12 * 60; // Minutes in a day
	const float MORNING_RATE = 0.12f, // INPUT: Charge Rates
		    MIDDAY_RATE = 0.55f,
	            NIGHTLY_RATE = 0.35f;
	const short MORNING_START = 0,    // INPUT: Start Times
	            MIDDAY_START = 60 * 7,
		    NIGHT_START = 60 * 19 + 1;


	// Get user input
	cout << "Enter starting time in 24h format (HH.MM)";
	cin >> timeInputBuf;
	cout << endl; // Formatting for IDEOne
	hoursBuf = timeInputBuf;
	minutesBuf = 100 * (timeInputBuf - hoursBuf);
	// Convert buffers to minutes in full
	startingTime = 60 * hoursBuf + minutesBuf;
	
	cout << "Enter number minutes spent on the call: ";
	cin >> minutesSpent;
	cout << endl; // Formatting for IDEOne
	// Validate input
	if (hoursBuf > 23) {
		cout << "Starting hour must be (00-23)!" << endl;
		return -1; // Might not be "stuctured programming"?
	}
	if (minutesBuf > 59) {
		cout << "Starting minute must be (00-59)!" << endl;
		return -1;
	}

	// Using `% DAY_MINUTES` to enable wrapping of endingTime
	// to the following day
	endingTime = (startingTime + minutesSpent) % DAY_MINUTES;

	// Calculate cost
	cost = 0.0f;
	// Calculate cost of any/all 24-hour call periods
	cost += minutesSpent / DAY_MINUTES * 
		(MORNING_RATE * (MIDDAY_START - MORNING_START)
		 + MIDDAY_RATE * (NIGHT_START  - MIDDAY_START)
		 + NIGHTLY_RATE * (DAY_MINUTES - NIGHT_START));
	// Discard any minutes over 24h cap
	//minutesSpent %= DAY_MINUTES; // Removed unecessary computation

	// TODO: Skip unecessary calculations if minutesSpent == 0

	// Calculating minutes spent in the morning time period
	{
		// Define shorthand variables for the sake of brevity
		// explanations above

		short tp_s = 0;                // time period start
		short tp_e = MIDDAY_START - 1; // time period end
		short s = startingTime; // start
		short e = endingTime;   // end
		bool sLTEe = s <= e;
		// Determine whether s/e are within time period,
		// using the "In Range" formula
		bool sINtp = s >= tp_s && s <= tp_e;
		bool eINtp = e >= tp_s && e <= tp_e;

		// All of the following comparisons and formulas
		// are based on the formula table derived above
		// Three boolean flags require 8 checks (2^3)
		// to cover all possible conditions.
		if (sLTEe && sINtp && eINtp)
			morningMins = e - s;
		else if (sLTEe && sINtp && !eINtp)
			morningMins = tp_e - s;
		else if (sLTEe && !sINtp && eINtp)
			morningMins = e - tp_s;
		else if (sLTEe && !sINtp && !eINtp)
			morningMins = tp_e - tp_s;
		else if (!sLTEe && sINtp && eINtp)
			morningMins = (tp_e - s) + (tp_s - e);
		else if (!sLTEe && sINtp && !eINtp)
			morningMins = tp_e - s;
		else if (!sLTEe && !sINtp && eINtp)
			morningMins = e - tp_s;
		else // (!sLTEe && !sINtp && !eINtp)
			morningMins = 0; // Not strictly necessary
	}

	// Calculating minutes spent in the midday period
	{
		// Define shorthand variables for the sake of brevity
		// explanations above

		short tp_s = MIDDAY_START;    // time period start
		short tp_e = NIGHT_START - 1; // time period end
		short s = startingTime; // start
		short e = endingTime;   // end
		bool sLTEe = s <= e;
		// Determine whether s/e are within time period,
		// using the "In Range" formula
		bool sINtp = s >= tp_s && s <= tp_e;
		bool eINtp = e >= tp_s && e <= tp_e;

		// All of the following comparisons and formulas
		// are based on the formula table derived above
		// Three boolean flags require 8 checks (2^3)
		// to cover all possible conditions.
		if (sLTEe && sINtp && eINtp)
			middayMins = e - s;
		else if (sLTEe && sINtp && !eINtp)
			middayMins = tp_e - s;
		else if (sLTEe && !sINtp && eINtp)
			middayMins = e - tp_s;
		else if (sLTEe && !sINtp && !eINtp)
			middayMins = tp_e - tp_s;
		else if (!sLTEe && sINtp && eINtp)
			middayMins = (tp_e - s) + (tp_s - e);
		else if (!sLTEe && sINtp && !eINtp)
			middayMins = tp_e - s;
		else if (!sLTEe && !sINtp && eINtp)
			middayMins = e - tp_s;
		else // (!sLTEe && !sINtp && !eINtp)
			middayMins = 0; // Not strictly necessary
	}
	// Calculating minutes spent in the night period
	{
		// Define shorthand variables for the sake of brevity
		// explanations above

		short tp_s = NIGHT_START;     // time period start
		short tp_e = DAY_MINUTES - 1; // time period end
		short s = startingTime; // start
		short e = endingTime;   // end
		bool sLTEe = s <= e;
		// Determine whether s/e are within time period,
		// using the "In Range" formula
		bool sINtp = s >= tp_s && s <= tp_e;
		bool eINtp = e >= tp_s && e <= tp_e;

		// All of the following comparisons and formulas
		// are based on the formula table derived above
		// Three boolean flags require 8 checks (2^3)
		// to cover all possible conditions.
		if (sLTEe && sINtp && eINtp)
			nightMins = e - s;
		else if (sLTEe && sINtp && !eINtp)
			nightMins = tp_e - s;
		else if (sLTEe && !sINtp && eINtp)
			nightMins = e - tp_s;
		else if (sLTEe && !sINtp && !eINtp)
			nightMins = tp_e - tp_s;
		else if (!sLTEe && sINtp && eINtp)
			nightMins = (tp_e - s) + (tp_s - e);
		else if (!sLTEe && sINtp && !eINtp)
			nightMins = tp_e - s;
		else if (!sLTEe && !sINtp && eINtp)
			nightMins = e - tp_s;
		else // (!sLTEe && !sINtp && !eINtp)
			nightMins = 0; // Not strictly necessary
	}

	// Add cost associated with each time period
	cost += MORNING_RATE * morningMins;
	cost += MIDDAY_RATE * middayMins;
	cost += NIGHTLY_RATE * nightMins;

	cout << "A call started at " << hoursBuf << ":" << minutesBuf
	     << " lasting for " << minutesSpent << " minutes:\n"
	     << "\tTotal Cost = $" << cost;

	return 0;
}
