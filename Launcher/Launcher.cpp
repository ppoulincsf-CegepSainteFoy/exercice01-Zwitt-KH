#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
//References : 
// https://www.w3schools.com/cpp/cpp_user_input.asp


// Écrivez les déclarations de vos fonctions ici
void ReadAllNotes();
void IsPrime();
void IsLeapYear();


int main()
{
	//ReadAllNotes();
	//IsPrime();
	IsLeapYear();
}

// Écrivez les définitions de vos fonctions ici

void ReadAllNotes()
{
	int note = -1;
	int total = 0;
	int nbNote = 0;
	do
	{
		cout << "Enter a note" << endl;
		cin >> note;

		if (note != -1)
		{
			nbNote++;
			total += note;
		}

	} while (note != -1);

	if (nbNote > 0)
	{
		cout << "Average is :";
		cout << total / nbNote << endl;
	}
	else
	{
		cout << "You do not have any note entered" << endl;
	}
}

void IsPrime()
{
	string userInput = "q";
	do
	{
		bool isPrime = true;
		cout << "Enter a number or q to quit: ";
		cin >> userInput;

		if (userInput != "q" && userInput != "Q")
		{
			int userInputInt = stoi(userInput);

			if (userInputInt >= 4)
			{
				for (int i = 2; i < userInputInt && isPrime;i++)
				{
					if (userInputInt % i == 0)
					{
						isPrime = false;
					}
				}
			}
			if (isPrime)
			{
				cout << "The number ";
				cout << userInput;
				cout << " is prime" << endl;
			}
			else
			{
				cout << "The number ";
				cout << userInput;
				cout << " isnt prime" << endl;
			}
		}
	} while (userInput != "q" && userInput != "Q");
}

void IsLeapYear()
{
	string userInput = "";
	int userInputInt = 0;

	cout << "Enter a year : ";
	cin >> userInput;
	userInputInt = stoi(userInput);

	if ((userInputInt % 4 == 0 && userInputInt % 100 != 0) || (userInputInt % 400 == 0))
	{
		cout << userInput << "  is a leap year" << endl;
	}
	else
	{
		cout << userInput << " is not a leap year" << endl;
	}
}
