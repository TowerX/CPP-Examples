// CashRegister.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// 7% tax Rate
	const float taxRate = 7;

	// Array to hold values
	float itemAmount[5];
	float itemTax[5];
	float itemSubtotal[5];

	// Initializing variables
	float itemTotal = 0;
	float taxTotal = 0;
	float totalDue = 0;


	// Set decimals to display (2)
	cout.precision(2);
	cout.setf(ios::fixed);

	// Calculation loop
	for (int i = 0; i < 5; i++) {
		cout << "Please enter the item amount one at a time: ";
		cin >> itemAmount[i];

		// Calculate tax
		itemTax[i] = (itemAmount[i] * taxRate) / 100;
		// Calculate item subtotal
		itemSubtotal[i] = itemAmount[i] + itemTax[i];
	}

	// Output design
	cout << "Item Cost \t\t Item Tax \t\t Item Subtotal" << endl;
	cout << "--------------------------------------------------------------" << endl;

	return 0;
}


