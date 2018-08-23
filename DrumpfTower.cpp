/**********************************************************************
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	This file allows the user to choose what they want to do in this location.
				Also contains the code that determines whether the user was successful in the location DrumpfTower.
				Allows user to get the codes need to execute the final hack at the Arcade.
**********************************************************************/

#include"DrumpfTower.h"


string DrumpfTower::name()
{
	return "Drumpf Tower!";
}

//returns the seceret 'tower_code' that is needed to execute the hack at the Arcade.
string DrumpfTower::get_tower_code()
{
	return tower_code;
}

//sets the 'tower_code' needed to pull off hack at the Arcade. 
void DrumpfTower::set_tower_code(string the_tower_code)
{
	tower_code = the_tower_code;
}

/*********************************************************************
** Function:		roll_die() - Virtual Function
** Description:		Allows user to select what the want to do while in the location/space DrumpFTower.
** Parameters:		None
** Pre-Conditions:	None
** Post-Conditions: The variable 'tower_code' will be set
** Return:			None
*********************************************************************/

void DrumpfTower::roll_die()
{
	cout << "Ohh no someone you know just walked in their gonna recognize you!! " << endl;
	int die;
	cout << "1 - To hide " << endl;
	cout << "2 - Meet the mystery person. " << endl;
	cout << "3 - To run " << endl;
	cout << "4 - We're going to have to try again " << endl;
	cin >> die;

	if (die == 1)
	{
		cout << "Quickly!! hide!!!" << endl;
		cout << "their gone. Get the file and get outta there! " << endl;
		this->set_tower_code("QX");
		cout << "This is your code remeber it. " << endl;
		cout << get_tower_code() << endl;
		cout << "But just in case i will keep it safe for you. " << endl;
	}
	if (die == 2)
	{
		cout << "Its just Mr. Robot. Try to ingnore him and get that file!! " << endl;
		cout << "that was close but we did it. " << endl;
		this->set_tower_code("QX");
		cout << "This is your code remeber it. " << endl;
		cout << get_tower_code() << endl;
		cout << "But just in case i will keep it safe for you. " << endl;
	}
	if (die == 3)
	{
		cout << "run!! " << endl;
		this->set_tower_code("QX");
		cout << "This is your code remeber it. " << endl;
		cout << get_tower_code() << endl;
		cout << "But just in case i will keep it safe for you. " << endl;

	}
	if (die == 4)
	{
		cout << "This isnt gonna work. They are going to recognize you. Your going to have to bail!! " << endl;
		cout << "We'll have to try this again " << endl;
		cin.clear();
		cin.ignore();
		roll_die();
	}
	else if ((die != 1) && (die != 2) && (die != 3) && (die != 4))
	{
		cout << "that was not a valid choice. Please try again. " << endl;
		cin.clear();
		cin.ignore();
		roll_die();
	}
}
