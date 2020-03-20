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
	for (int i = 0; i < SIZE; i++) {

	}
}

// Perform a search based on user input
void searchData() {

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