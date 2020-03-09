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
	
	// Fill the array with data
	cout << "Please enter 3 contact names and phone numbers" << endl;
	cout << "--------------------------------------------------------------" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter the contact name:" << endl;
		cin >> name[i];
		cout << "Enter the phone number for:" << name[i] << endl;
		cin >> phone[i];
	}
	
	return 0;
}


/*
1 - The program is to store individual names and associated telephone numbers in parallel arrays.
2 - The program should input from the user 10 people’s names and their telephone numbers and add the data to the parallel arrays.
3 - When data input is finished, the program should sort both data arrays in ascending order based on telephone numbers maintaining the associations between namesand telephone numbers.
4 - The program will print the list of usersand their telephone numbers after sorting.
5 - After printing the list, the program will ask for a name to search for.
6 - The user will then enter a name.
7 - The program will then search for the nameand print the nameand the associated telephone number for that person.
8 - If the person is not in the array, the program will print that the user cannot be found.
*/

