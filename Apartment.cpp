/***********************************************************************
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	This file allows the user to choose what they want to do in this location.
				Also contains the code that determines whether the user was successful in the location Apartment.
				Allows user to get the codes need to execute the final hack at the Arcade. 
***********************************************************************/

#include"Apartment.h"

//returns the seceret 'code' that is needed to execute the hack at the Arcade.
int Apartment::getCode()
{
	return code;
}

//sets the 'code' needed to pull off hack at the Arcade. 
void Apartment::setCode(int the_code)
{
	code = the_code;
}

string Apartment::name()
{
	return "Elliot's Apartment";
}

//returns whether there is fire damage at the apartment
string Apartment::get_fire()
{
	return fire;
}

//sets whether there is fire damage at the apartment
void Apartment::set_fire(string the_fire)
{
	fire = the_fire;
}



/*********************************************************************
** Function:		roll_die() - Virtual Function
** Description:		Allows user to select what the want to do while in the location/space Apartment.
					If user chooses to burn menu, then he will catch the whole room on fire.
** Parameters:		None
** Pre-Conditions:	None
** Post-Conditions: The variable 'code' will be set
** Return:			None
*********************************************************************/
void Apartment::roll_die()
{

	cout << "Someone pounds on the Door. You " << endl;

	int die;
	cout << "1 - To hide in the closet " << endl;
	cout << "2 - Burn the menu and run " << endl;
	cout << "3 - Ignore it. Its just your schizophrenia again" << endl;
	cout << "4 - Meet the mystery person " << endl;
	cin >> die;

	if (die == 1)
	{
		cout << "Quickly!! hide " << endl;
		cout << "their gone. Lets get outta there! " << endl;
		this->setCode(12);
		//cout << this->getCode() << endl; testing the the code is being set
	}
	if (die == 2)
	{
		cout << "You were able to destroy the evidence but inadvertantly caught your appartment on fire. " << endl;
		cout << "Sorry for your luck. " << endl;
		set_fire("Fire Damage");
		this->setCode(12);

	}
	if (die == 3)
	{
		cout << "Its just your schizophrenia again " << endl;
		this->setCode(12);
	}
	else if (die == 4)
	{
		cout << "3.	Its Mr. Robot and he’s here to escort you to your next location " << endl;
		this->setCode(12);
	}

	else if ((die != 1) && (die != 2) && (die != 3) && (die != 4))
	{
		cout << "that was not a valid choice. Please try again. " << endl;
		cin.clear();
		cin.ignore();
		roll_die();
	}

}

