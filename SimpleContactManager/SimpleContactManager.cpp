/*
Author: Jay Torres
Date: March 8, 2020
Purpose: Simple Contact Manager
FileName: SimpleContactManager.cpp
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	// Declare name and phone array variables with a size of constant variable SIZE in this case, 3
	const int SIZE = 3;
	string name[SIZE] = { "" };
	string phone[SIZE] = { "" };
	string searchInput;
	
	// Header information
	cout << "Please enter 3 contact names and phone numbers" << endl;
	cout << "--------------------------------------------------------------" << endl;
	// Fill the array with data
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter the contact name:" << endl;
		cin >> name[i];
		cout << "Enter the phone number for:" << name[i] << endl;
		cin >> phone[i];
	}

	// Sort the array after user input based on the phone number
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE - 1; j++) {
			if (phone[j] > phone[j + 1]) {
				// Declare string variable temp to hold the value of the array and swap its values as reference.
				string temp = phone[j];
				phone[j] = phone[j + 1];
				phone[j + 1] = temp;
			}
		}
	}

	// Print the content of the array
	for (int i = 0; i < SIZE; i++) {
		cout << setw(2) << i + 1 << "." << "Name: " << setw(20) << name[i] << " | " << "Number: " << setw(15) << phone[i] << endl;
	}
	
	// Get user input and store the value on searchInput variable.
	cout << "Enter a name to search" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cin >> searchInput;

	// Search the actual array with provided input.
	for (int i = 0; i < SIZE; i++) {
		if (name[i] == searchInput) {
			cout << "\nContact Found! The information is below" << endl;
			cout << "--------------------------------------------------------------" << endl;
			cout << setw(2) << "Name: " << setw(20) << name[i] << " | " << "Number: " << setw(15) << phone[i] << endl;
			// Limit the loop to one success.
			break;
		}
		else {
			// If contact is not found
			cout << "Contact not found!." << endl;
		}
	}

	
	return 0;
}


