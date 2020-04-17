#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Choices.h"
#include "Endings.h"
#include "Cannon.h"

using namespace std;

void Scenario()
{
	//Variable to hold the user's name
	string name;

	//Reference to the user's name for immersion
	string& r_name = name;

	//Ask for the user's name
	cout << "\nWhat is your name? ";

	//Allows user to type in their name
	getline(cin, name);

	//Introduction
	cout << "\n\nHello, " << name << " you are a clone in the Grand Army of the Republic.\n";

	//Set the user's name to a clone unit number
	r_name = "CT4316";

	//Continue introduction
	cout << "You shall be known as " << r_name << " for the duration of this mission\n";
	cout << "While on a mission to aid troops in the Felucia system, you are attacked by a Separatist cruiser!\n";

	//Run the Role function
	Role();
}

//Determine the user's character role (job)
int Role()
{
	//Variable to help generate a random role for the user
	int role = rand() % 4;

	if (role == 1)
	{
		cout << "\nYou are a fighter pilot.\n\n";
		ChoiceA();
	}
	else if (role == 2)
	{
		cout << "\nYou are a ship mechanic.\n\n";
		ChoiceB();
	}
	else if (role == 3)
	{
		cout << "\nYou are a cannon operator.\n\n";
		ChoiceC();
	}

	return role;
}