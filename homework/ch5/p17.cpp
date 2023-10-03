//Matthew Reese           CS1A           Chapter 5, P. 297, #17
//
/**************************************************************
*
* DISPLAY SALES BAR CHART
* ____________________________________________________________
* This program...
* computation
* ____________________________________________________________
* INPUT
*    numStores   : The number of stores to display data for
*    storeSales  : Sales of each store, in dollars
*    chart scale : value in dollars that each star represents
*
* OUTPUT
*    salesChart  : Bar chart displaying sales of each store
**************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

int main() {
	using namespace std;
	
	int numStores;      // INPUT
	int storeSales;     // INPUT
	string salesChart;  // OUTPUT

	// Initialize constants
	const int GRAPH_SCALE = 100; // INPUT

	
	// Take user input
	cout << "Enter the number of stores: ";
	cin >> numStores;
	cout << endl; // IDEOne formatting
	
	for (int storeIndex = 1; storeIndex <= numStores; storeIndex++) {
		cout << "Enter today's sales for store " << storeIndex << ": ";
		cin >> storeSales;
		cout << endl; // IDEOne formatting

		salesChart += "Store ";
		salesChart += storeIndex;
		salesChart += ": ";
		// The following would be much simpler, but was not in textbook:
		//salesChart += string(storeSales / GRAPH_SCALE, '*');
		for (int dollars = GRAPH_SCALE; dollars <= storeSales; dollars += GRAPH_SCALE) {
			salesChart += "*";
		}
		salesChart += "\n";
	}

	cout << "SALES BAR CHART\n"
	     << "(Each * is $100)\n"
	     << salesChart;

	return 0;
}
