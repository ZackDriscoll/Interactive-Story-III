#include "Cannon.h"
#include <string>
#include <iostream>

using namespace std;

Cannon::Cannon(string cNum)
{
	Number = cNum;
}

void Cannon::CannonNumber(string cannonNumber) 
{
	string* p_cNum = &Number;

	//Tell the user what their cannon number is
	cout << "\nYour cannon number designation is " << p_cNum << endl;
}