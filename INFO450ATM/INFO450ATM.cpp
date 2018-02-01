// ATM Withdrawal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int input, bill50 = 0, bill20 = 0, bill10 = 0, bill5 = 0, bill1 = 0;
	char answer;

	
	do
	{

		// Asks the user to input withrawl amount, lets the user know if they have inputted a value greater or less than the required amount

		cout << "Please enter withdrawal amount: ";
		cin >> input;

		do
		{

			if (input <= 0)
			{
				cout << "Sorry, the minimum amount you can withdraw is $1.00. ";
				cout << "\n\n";
				cout << "Please enter withdrawal amount: ";
				cin >> input;


			}

			else if (input >= 301)
			{
				cout << "Sorry, the max amount you can withdraw is $300.00. ";
				cout << "\n\n";
				cout << "Please enter withdrawal amount: ";
				cin >> input;
			}


		} while (input <= 0 || input >= 301);

		// Calculation of the amount of bills given out is processed here

		bill50 = input / 50;
		input = input % 50;

		bill20 = input / 20;
		input = input % 20;

		bill10 = input / 10;
		input = input % 10;

		bill5 = input / 5;
		input = input % 5;

		bill1 = input / 1;
		input = input % 1;

		// Displays the amount of bills the user has recieved in result of the value they inputted		
		if (bill50>0)
			cout << "you have " << bill50 << " $50.00 bill(s)\n";
		if (bill20>0)
			cout << "you have " << bill20 << " $20.00 bill(s)\n";
		if (bill10>0)
			cout << "you have " << bill10 << " $10.00 bill(s)\n";
		if (bill5>0)
			cout << "you have " << bill5 << " $5.00 bill(s)\n";
		if (bill1>0)
			cout << "you have " << bill1 << " $1.00 bill(s)\n";

		cout << "\nAnother withdrawl? enter Y to continue: ";
		cout << "\n";
		cin >> answer;
		cout << "\n\n";
	}

	// Runs the program again if the user hits Y
	while (answer == 'Y' || answer == 'y');



	return 0;
}

