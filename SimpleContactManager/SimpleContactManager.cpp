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
	
	// Search the array based on user input and store the value on searchInput variable.
	cout << "Enter a name to search" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cin >> searchInput;
	// Search the actual array with provided input.
	for (int i = 0; i < SIZE; i++) {
		if (name[i] == searchInput) {
			cout << "Contact Found! The information is below" << endl;
			cout << "--------------------------------------------------------------" << endl;
			cout << setw(2) << "Name: " << setw(20) << name[i] << " | " << "Number: " << setw(15) << phone[i] << endl;
		}
		else {
			cout << "Contact not found!." << endl;
		}
	}

	// Input name
	
	return 0;
}


/*
3 - When data input is finished, the program should sort both data arrays in ascending order based on telephone numbers maintaining the associations between namesand telephone numbers.
5 - After printing the list, the program will ask for a name to search for.
6 - The user will then enter a name.
7 - The program will then search for the name and print the nameand the associated telephone number for that person.
8 - If the person is not in the array, the program will print that the user cannot be found.
*/

