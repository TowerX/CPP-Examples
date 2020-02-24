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
	string lightColor = "";
	string traffic = "";
	string turnSignal = "";

	cout << "Is the traffic light red, yellow or green?" << endl;
	cin >> lightColor;
	
	if (lightColor != "green") {
		cout << "The light is: " << lightColor << " , do not turn!" << endl;
	}
	else {
		cout << "The light is green! Is there any oncoming traffic - yes or no?" << endl;
		cin >> traffic;

		if (traffic === "no" || traffic === "No") {
			cout << "Yay! There is no traffic! You can cross now." << endl;
		}
		else {
			cout << "Woops! There is traffic and you should not cross right now." << endl;
		}
	}


	return 0;
}

