/*
Author: Jay Torres
Date: March 4, 2020
Update Date: March 15, 2020 (Modularizing Your Simple Cash Register)
Purpose: Cash Register App - Calculate totals with tax.
FileName: CashRegister.cpp
*/

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
		// Calculate item subTotal
		itemSubtotal[i] = itemAmount[i] + itemTax[i];
		// Calculate itemTotal
		itemTotal = itemTotal + itemAmount[i];
		// Calculate taxTotal
		taxTotal = taxTotal + itemTax[i];
		// Calculate totalDue
		totalDue = totalDue + itemSubtotal[i];
	}

	// Output design
	cout << "Item Cost \t\t Item Tax \t\t Item Subtotal" << endl;
	cout << "--------------------------------------------------------------" << endl;
	
	// Loop through the values
	for (int i = 0; i < 5; i++) {
		// Display the values to the console
		cout << itemAmount[i] << "\t\t\t" << itemTax[i] << "\t\t\t\t" << itemSubtotal[i] << endl;
	}
	// Display totals to the console
	cout << "--------------------------------------------------------------" << endl;
	cout << "Items Total \t\t Tax Total \t\t Total Due" << endl;
	cout << itemTotal << "\t\t\t" << taxTotal << "\t\t\t\t" << totalDue << endl;

	return 0;
}


