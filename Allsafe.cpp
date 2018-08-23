/*
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	This file allows the user to choose what they want to do in this location.
				Also contains the code that determines whether the user was successful in the location Allsafe. 
*/

#include"Allsafe.h"



string Allsafe::name()
{
	return "Allsafe Cyber Security";
}

//sets whether the user broke the work station or not. 
void Allsafe::set_work_station(string theWorkStation)
{
	work_station = theWorkStation;
}

//returns whether the user broke the work station or not. 
string Allsafe::get_work_station()
{
	return work_station;
}


/*********************************************************************
** Function:		roll_die() - Virtual Function
** Description:		User selects what to do at this location. If they select anything but the number 2, 
					they will have to come back to the location, and try again. 
** Parameters:		None
** Pre-Conditions:	None
** Post-Conditions:	work_station will be set.
** Return:			None
*********************************************************************/

void Allsafe::roll_die()
{

	cout << "It looks like someone is comming.  " << endl;
	cout << "You need to hury or you might get caught! " << endl;
	cout << "What are you going to do? " << endl;
	int die;
	cout << "1 - To hide hide under the desk. " << endl;
	cout << "2 - To risk it and just hurry it up. " << endl;
	cout << "3 - To run. " << endl;
	cout << "4 - Meet the mystery person. " << endl;
	cin >> die;

		if (die == 1)
		{
			cout << "Thier gone but, hiding under the desk disloged wires and now this computer doesnt work. " << endl;
			cout << "We'll have to try again later. " << endl;
			set_work_station("broke");
		}
		if (die == 2)
		{
			cout << "hury up, load the cd, and destroy the evidence " << endl;
			cout << "that was close but we did it. " << endl;
			setLocationVector2();
		}
		if (die == 3)
		{
			cout << "RUN!!!" << endl;
			cout << "Running caused you to trip and break a workstation. " << endl;
			cout << "We'll have to try again later. " << endl;
			set_work_station("broke");

		}
		if (die == 4)
		{
			cout << "Its a coworker. We'll have to try this again. " << endl;
			cin.clear();
			cin.ignore();
			roll_die(); //used recursion to re-execute, the sequense. 
		}
		else if ((die != 1) && (die != 2) && (die != 3) && (die != 4))
		{
			cout << "That was not a valid choice. Please try again. " << endl;
			cin.clear();
			cin.ignore();
			roll_die();
		}
}