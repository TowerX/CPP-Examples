/*
Author: Jay Torres
Date: February 23, 2020
Purpose: Create a program that simulates the decisions needed when a self-driving automobile makes a left turn at a traffic light.
FileName: SelfDrivingCar.cpp : This file contains the 'main' function. Program execution begins and ends there.
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	// Declare variables and initialize them as empty strings.
	string lightColor = "";
	string traffic = "";
	string turnSignal = "";
	// Prompt the user and store asnwer in lightColor variable.
	cout << "Is the traffic light red, yellow or green?" << endl;
	cin >> lightColor;
	// Conditional loop to check if the light color is not green by using the previously prompt varible value of lightColor.
	if (lightColor != "green") {
		cout << "The light is: " << lightColor << " , do not turn!" << endl;
	}
	else {
		// After the condition pass we prompt the user for the traffic and store it in the variable traffic.
		cout << "The light is green! Is there any oncoming traffic - yes or no?" << endl;
		cin >> traffic;
		// If there is traffic, display a message of not good to cross.
		if (traffic != "yes") {
			cout << "Yay! There is no traffic! You can turn now." << endl;
			turnSignal = "off";
			cout << "Turn Signal Status: " << turnSignal << endl;
		}
		else {
			cout << "Woops! There is traffic and you should not turn right now." << endl;
			turnSignal = "left";
			cout << "Turn Signal Status: " << turnSignal << endl;
		}
	}


	return 0;
}

