/***********************************************************************
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	This file allows the user to choose what they want to do in this location.
***********************************************************************/

#include"SteelMountain.h"


string SteelMountain::name()
{
	return "Steel Mountain Data Storage Facility";
}


/*********************************************************************
** Function:		roll_die() - Virtual Function
** Description:		Allows user to select what the want to do while in the location/space SteelMountain.
					If user chooses to burn menu, then he will catch the whole room on fire.
** Parameters:		None
** Pre-Conditions:	None
** Post-Conditions: None
** Return:			None
*********************************************************************/
void SteelMountain::roll_die()
{
	cout << "Ohh no someone just walked in. Their gonna catch you swapping the wires on the thermostat! " << endl;
	cout << "What are you going to do? " << endl;
	
	int die;
	cout << "1 - To hide " << endl;
	cout << "2 - To risk it and just hurry it up " << endl;
	cout << "3 - To run " << endl;
	cout << "4 - Meet the mystery person " << endl;
	cin >> die;

		if (die == 1)
		{
			cout << "Quickly!! Hide!!!" << endl;
			cout << "Their gone. Attach that Raspberry Pi and get outta there! " << endl;
		}
		if (die == 2)
		{
			cout << "Hury up and attach that Raspberry Pi before they see you! " << endl;
			cout << "That was close but we did it. " << endl;
		}
		if (die == 3)
		{
			cout << "RUN!! " << endl;
		}
		if (die == 4)
		{
			cout << "Ohh nooo! You bumped into Tyrel, the CTO for Drumpf Corp. Now you have to have lunch with him. " << endl;
			cout << "We'll have to try this again " << endl;
			cin.clear();
			cin.ignore();
			roll_die();
		}
		else if ((die != 1) && (die != 2) && (die != 3) && (die != 4))
		{
			cout << "That was not a valid choice. Please try again. " << endl;
			cin.clear();
			cin.ignore();
			roll_die();
		}
}
