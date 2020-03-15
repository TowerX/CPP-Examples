/*
Author: Jay Torres
Date: March 15, 2020
Purpose: Modularized Phone Book App
FileName: ModulePhoneBook.cpp
*/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int SIZE = 3;
string name[SIZE] = { "" };
string phoneNumber[SIZE] = { "" };
string searchInput;
int sortOrder = 0;


void inputData() {
	// Get input from the user
	for (int i = 0; i < SIZE; i++) {
		// Header information
		cout << "Please enter 3 contact names and phone numbers" << endl;
		cout << "--------------------------------------------------------------" << endl;
		// Fill the array with data
		for (int i = 0; i < SIZE; i++) {
			cout << "Enter the contact name:" << endl;
			getline(cin, name[i]);

			cout << "Enter the phone number for:" << name[i] << endl;
			cin >> phoneNumber[i];
			cin.ignore();
		}
	}
}

void searchData() {
	// Get user input and store the value on searchInput variable.
	cout << "Enter a name to search" << endl;
	cout << "--------------------------------------------------------------" << endl;
	getline(cin, searchInput);
	cin.ignore();

	// Search the actual array with provided input.
	for (int i = 0; i < SIZE; i++) {
		if (name[i] == searchInput) {
			cout << "\nContact Found! The information is below" << endl;
			cout << "--------------------------------------------------------------" << endl;
			cout << setw(2) << "Name: " << setw(20) << name[i] << " | " << "Number: " << setw(15) << phoneNumber[i] << endl;
			// Limit the loop to one success.
			break;
		}
		else {
			// If contact is not found
			cout << "Contact not found!." << endl;
		}
	}
}

void sort(int sortDir) {
	// Sort the array after user input based on the phone number
	if (sortDir = 1) {
		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE - 1; j++) {
				if (phoneNumber[j] > phoneNumber[j + 1]) {
					// Declare string variable temp to hold the value of the array and swap its values as reference.
					string temp = phoneNumber[j];
					phoneNumber[j] = phoneNumber[j + 1];
					phoneNumber[j + 1] = temp;
				}
			}
		}
	} else if(sortDir = 0) {

	}
	else {
		cout << "Please type 1 for ASCENDING or 0 for DESCENDING order." << endl;
	}
}

void printData() {
	// Print the input data after sorting
	for (int i = 0; i < SIZE; i++) {
		cout << setw(2) << i + 1 << "." << "Name: " << setw(20) << name[i] << " | " << "Number: " << setw(15) << phoneNumber[i] << endl;
	}
}



int main()
{
	int menuChoice;
	while (1) {
		cout << "\n\nPress 1 to Input data:" << endl;
		cout << "Press 2 to Sort data in ASCENDING order:" << endl;
		cout << "Press 3 to Sort data in DESCENDING order:" << endl;
		cout << "Press 4 to Print data:" << endl;
		cout << "Press 5 to Search data:" << endl;
		cout << "Press 6 to Exit the program:" << endl;

		cin >> menuChoice;
		cout << "\n\n" << endl;

		switch (menuChoice) {

		case 1:
			cin.ignore();
			inputData();
			break;

		case 2:
			//Sort ASCENDING
			sort(sortOrder);
			break;
		case 3:
			// Sort DESCENDING
			sort(sortOrder);
			break;
		case 4:
			// Print data
			printData();
			break;
		case 5:
			// Search data
			searchData();
			break;
		case 6: 
			// Exit program
			return 0;
			break;
		default: 
			cout << "Do nothing" << endl;
		}
	}


	return 0;
}

