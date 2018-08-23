/***********************************************************************
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	This file allows the user to choose what they want to do in this location.
***********************************************************************/

#include"Subway.h"



//simply a way to retrive which location the user is in. 
string Subway::name()
{
	return "The Subway";
}

//will be set if user exits subway with MR. Robot
void Subway::set_secret_tunnel(string the_secret_tunnel)
{
	secret_tunnel = the_secret_tunnel;
}

//returns a string to let you know a secret passage way has been found.
string Subway::get_secret_tunnel()
{
	return secret_tunnel;
}
//will be set if user chooses to run
void Subway::set_subway_door(string the_subway_door)
{
	subway_door = the_subway_door;
}

//will return a string to let you know that the subway door is broke
string Subway::get_subway_door()
{
	return subway_door;
}

/*********************************************************************
** Function:		yes_no_funct() - Virtual Function
** Description:		Tried to override virtual function from base class Location.
					Give player that option to choose y/n and simple menu. 
					If user selected Y, then they wouldnt have to go to location Allsafe.
					However, did not have time to fully implement into the program. 
** Parameters:		A string that asks the user what they want to do. 
** Pre-Conditions:	None
** Post-Conditions: Depending on user choice, may input Allsafe into the vector, and user will 
					not have to go to that location. 
** Return:			None
*********************************************************************/

void Subway::yes_no_funct(string place)
{
	//cin.sync();
	cin.ignore();
	string temp = place;
	char answer;
	cout << place << endl;
	cout << "y/n" << endl;
	cin.get(answer);
	answer = toupper(answer);

	if (answer == 'Y')
	{
		cout << " good " << endl;
		set_secret_tunnel("Access Granted");
		cout << "Mr. Robot shows you a secret passage way! " << endl;
		cout << get_secret_tunnel() << endl;
		cout << "He also tells you secrets and now you can skip going to location Allsafe." << endl;
		cout << "Enter to Continue " << endl;
		cin.get();
		cin.get();

		locationVector.push_back("Allsafe Cyber Security");
	}

	if (answer == 'N')
	{
		cout << " Well then what do i do!!?? " << endl;
	}

	else if ((answer != 'N') && (answer != 'Y'))
	{
		cout << "that was not a valid choice. Please try again. " << endl;
		cin.clear();
		cin.ignore();
		yes_no_funct(temp);
	}
}

/*********************************************************************
** Function:		roll_die() - Virtual Function
** Description:		User selects what to do at this location.
					If user chooses to run then the subway door will break.
					If user Gets off a stop with Mr. Robot, then a secret passage way will be revealed. 
					NOTE: did not get to integrate the secret passageway due to time restrictions. 
** Parameters:		None
** Pre-Conditions:	None
** Post-Conditions: Changes depending on what the user decides what they want to do. 
** Return:			None
*********************************************************************/
void Subway::roll_die()
{
	cout << "Ohh No. You think someone is following you! Do they know about you and your plan? " << endl;

	int die;
	cout << "1 - Ignore it " << endl;
	cout << "2 - To run " << endl;
	cout << "3 - Meet the mystery person " << endl;
	cin >> die;

	if (die == 1)
	{

		cout << "Thank God. Its just your schizophrenia and paranoia again. " << endl;
		cout << "" << endl;
	}

	if (die == 2)
	{
		cout << "That was close. But you broke the subway door trying to get out of there so quickly! " << endl;
		set_subway_door("Door Broke");
		cout << get_subway_door() << endl;

	}
	if (die == 3)
	{
		cout << "The mysterious man sits in front of you. His jacket has 'Mr. Robot' written on it. " << endl;
		cout << "the man says he will leave at the next stop and strongly suggest that you do to.  " << endl;
		this->yes_no_funct(" Are you going to get off the next stop with him??  ");
		cout << endl;

	}
	else if ((die != 1) && (die != 2) && (die != 3))
	{
		cout << "that was not a valid choice. Please try again. " << endl;
		cin.clear();
		cin.ignore();
		roll_die();
	}
}
