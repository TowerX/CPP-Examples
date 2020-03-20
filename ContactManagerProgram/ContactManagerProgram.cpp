/*
Author: Jay Torres
Date: March 16, 2020
Purpose: The Contact Manager Program: It allows you to create, search, sort, and view contacts on a list similar to a phone book application.
FileName: ContactManagerProgram.cpp
*/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

// Constant variable holding the array size for easy access to modifications.
const int SIZE = 3;
string firstName[SIZE] = { "" };
string lastName[SIZE] = { "" };
string phoneNumber[SIZE] = { "" };
string emailAddress[SIZE] = { "" };
string searchInput = "";

// Functions

// Get input from the user
void inputData() {
	cout << "Please enter " << SIZE << " contacts." << endl;
	cout << "--------------------------------------------------------------" << endl;

	// Fill the array with data
	for (int index = 0; index < SIZE; index++) {
		cout << "Enter the contact first name:" << endl;
		cin >> firstName[index];
		cout << "Enter " << firstName[index] << ", last name:" << endl;
		cin >> lastName[index];
		cout << "Enter " << firstName[index] << ", " << lastName[index] << " email address:" << endl;
		cin >> emailAddress[index];
	}
}

// Perform a search based on user input
void searchData() {
	// Get user input and store the value on searchInput variable.
	cout << "Enter a name to search" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cin >> searchInput;

	// Search the actual array with provided input.
	for (int index = 0; index < SIZE; index++) {
		if (firstName[index] == searchInput || lastName[index] == searchInput || phoneNumber[index] == searchInput) {
			cout << "\nContact Found! The information is below" << endl;
			cout << "--------------------------------------------------------------" << endl;
			cout << setw(2) << "FirstName: " << setw(20) << firstName[index] << " | " << "LastName: " << setw(20) << firstName[index] << " | " << "Phone Number: " << setw(15) << phoneNumber[index] << " | " << "FirstName: " << setw(20) << firstName[index] << " | " << "EmailAddress: " << emailAddress[index] << endl;
			cout << "\n\n";
		}
		else {
			// If contact is not found
			cout << "Contact not found!." << endl;
			cout << "\n\n";
		}
	}
}

// Display the data
void printData() {

}

// Ascending sort function using the bubble sort technique.
void sortAscending() {

}

// Descending sort function using the bubble sort technique.
void sortDescending() {

}

// Swap function required for the bubble sort
void swap() {

}
// End Functions

int main()
{	
	// Store the menu choice selected by the user. This will be used as the switch case number.
	int menuChoice;

	// Main Menu Loop - While return is true => continue otherwise exit the program.
}