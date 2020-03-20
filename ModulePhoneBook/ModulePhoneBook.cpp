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
// Constant variable holding the array size for easy access to modifications.
const int SIZE = 3;
string name[SIZE] = { "" };
string phoneNumber[SIZE] = { "" };
string searchInput = "";


void inputData() {
	// Get input from the user
	// Header information
	cout << "Please enter 3 contact names and phone numbers" << endl;

	// Fill the array with data
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter the contact name:" << endl;
		cin >> name[i];
		cout << "Enter the phone number for:" << name[i] << endl;
		cin >> phoneNumber[i];
	}
}
// Contact not found message even if the contact is found
// Issue found by teacher
void searchData() {
	// Get user input and store the value on searchInput variable.
	cout << "Enter a name to search" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cin >> searchInput;

	// Search the actual array with provided input.
	for (int i = 0; i < SIZE; i++) {
		if (name[i] == searchInput || phoneNumber[i] == searchInput) {
			cout << "\nContact Found! The information is below" << endl;
			cout << "--------------------------------------------------------------" << endl;
			cout << setw(2) << "Name: " << setw(20) << name[i] << " | " << "Number: " << setw(15) << phoneNumber[i] << endl;
			cout << "\n\n";		
		}
		else {
			// If contact is not found
			cout << "Contact not found!." << endl;
			cout << "\n\n";
		}
	}
}

void printData() {
	// Print the input data after sorting
	cout << "\nPhone Contacts" << endl;
	cout << "--------------------------------------------------------------" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << setw(2) << i + 1 << "." << "Name: " << setw(20) << name[i] << " | " << "Number: " << setw(15) << phoneNumber[i] << endl;
	}
	cout << "\n\n";
}

// Ascending sort function using the bubble sort technique
void sortAscending(string names[], string phones[], int size) {
	int maxElement;
	int index;

	for (maxElement = size - 1; maxElement >= 0; maxElement--) {
		for (index = 0; index <= maxElement - 1; index++) {
			if (phones[index] > phones[index + 1]) {
				swap(phones[index], phones[index + 1]); \
					swap(names[index], names[index + 1]);
			}
		}
	}
}
// Descending sort function using the bubble sort technique
void sortDescending(string names[], string phones[], int size) {
	int maxElement;
	int index;
	for (maxElement = size - 1; maxElement >= 0; maxElement--) {
		for (index = 0; index <= maxElement - 1; index++) {
			if (phones[index] < phones[index + 1]) {
				swap(phones[index], phones[index + 1]);
					swap(names[index], names[index + 1]);
			}
		}
	}
}
// Swap function required for the bubble sort
void swap(string a, string b) {
	string temp;
	temp = a;
	a = b;
	b = temp;
}


int main()
{
	// Store the menu choice selected by the user. This will be used as the switch case number.
	int menuChoice;
	while (1) {
		cout << "<><>Phone Book Program<><>" << endl;
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
			//Sort ASCENDING and Print data
			cout << "\nData sorted in Ascending order" << endl;
			cout << "--------------------------------------------------------------" << endl;
			cout << "\n\n";
			sortAscending(name, phoneNumber, SIZE);
			printData();
			break;
		case 3:
			// Sort DESCENDING and Print data
			cout << "\nData sorted in Descending order" << endl;
			cout << "--------------------------------------------------------------" << endl;
			cout << "\n\n";
			sortDescending(name, phoneNumber, SIZE);
			printData();
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
			break;
		}
	}
}

