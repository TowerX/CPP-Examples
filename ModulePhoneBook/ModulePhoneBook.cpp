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

void printData() {
	// Print the input data after sorting
	for (int i = 0; i < SIZE; i++) {
		cout << setw(2) << i + 1 << "." << "Name: " << setw(20) << name[i] << " | " << "Number: " << setw(15) << phone[i] << endl;
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
			break;
		case 3:
			// Sort DESCENDING
			break
		case 4:
			// Print data
			printData();
			break;
		case 5:
			// Search data
			searchData();
			break
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

