/**********************************************************************
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	This file displays the game background, directions and map.
				This esentially runs the program. Sets starting conditions.
				Displays each place the user goes to and what other locations surround them.
				Allows the user to select what they want to do in each location and options 
				of what location they can go to next.
**********************************************************************/

#include"Play.h"


/*********************************************************************
** Function:		setUpMap()
** Description:		This sets the initial location to be subway. It also sets
					the locations surrounding each location. (what is to the left, right, up down)
** Parameters:		None
** Pre-Conditions:	None
** Post-Conditions: None
** Return:			Subway, so player has somwhere to start.
*********************************************************************/
Location* Play::setUpMap()

{
	// point all locations correctly. Aka points to address of what is up, down left right.
	allsafe->setLocations(steel_mountain, NULL, NULL, subway);
	apartment->setLocations(NULL, tower, subway, NULL);
	arcade->setLocations(tower, NULL, subway, NULL);
	tower->setLocations(apartment, arcade, subway, NULL);
	steel_mountain->setLocations(NULL, allsafe, NULL, subway);
	subway->setLocations(NULL, NULL, allsafe, tower);

	return subway;
}


/*********************************************************************
** Function:		location_subway(Location *currentLoc)
** Description:		This will display the locations surrounding the subway 
					and allow user to choose which location they want to go to next. 					
** Parameters:		A pointer from the Abstract base class.
** Pre-Conditions:	Pointers need to be created for each subclass(location). 
** Post-Conditions: None
** Return:			Pointer to the location where user wants to go next. 
*********************************************************************/
Location* Play::location_subway(Location *currentLoc)
{
	int temp = 0;

	while ((temp != 1) || (temp != 2))
	{
		cout << "What stop should we take? " << endl;
		currentLoc->print();		//display where the user can go from here, to the console
		int selection;
		cin >> selection;
		if (selection == 1)
		{
			return allsafe;
		}
		if (selection == 2){
			cout << "testing subway function" << endl;
			return tower;
		}
		temp = selection;
		cin.clear();
		cin.ignore();
	}
}

/*********************************************************************
** Function:		location_tower(Location *currentLoc)
** Description:		This will display the locations surrounding DrumpfTower
					and allow user to choose which location they want to go to next.
** Parameters:		A pointer from the Abstract base class.
** Pre-Conditions:	Pointers need to be created for each subclass(location).
** Post-Conditions: None
** Return:			Pointer to the location where user wants to go next.
*********************************************************************/
Location* Play::location_tower(Location *currentLoc)
{
	int temp = 0;

	while ((temp != 1) || (temp != 2))
	{
		currentLoc->print();
		int selection;
		cout << "Please enter the number of where you want to go next. " << endl;
		cin >> selection;

		if (selection == 1)
		{
			return apartment;
		}
		if (selection == 2){

			return arcade;
		}
		if (selection == 3){
			return subway;
		}
		temp = selection;
		cin.clear();
		cin.ignore();
	}
}

/*********************************************************************
** Function:		location_allsafe(Location *currentLoc)
** Description:		this will display the locations surrounding Allsafe
					and allow user to choose which location they want to go to next.
** Parameters:		A pointer from the Abstract base class.
** Pre-Conditions:	Pointers need to be created for each subclass(location).
** Post-Conditions: None
** Return:			Pointer to the location where user wants to go next.
*********************************************************************/
Location* Play::location_allsafe(Location *currentLoc)
{
	int temp = 0;

	while ((temp != 1) || (temp != 2))
	{
		cout << "Please enter the number of where you want to go next. " << endl;
		currentLoc->print();

		int selection;
		cin >> selection;

		if (selection == 1)
		{
			return steel_mountain;
		}
		if (selection == 2){
			return subway;
		}
		temp = selection;
		cin.clear();
		cin.ignore();
	}
}

/*********************************************************************
** Function:		location_apartment(Location *currentLoc)
** Description:		This will display the locations surrounding the Apartment
					and allow user to choose which location they want to go to next.
** Parameters:		A pointer from the Abstract base class.
** Pre-Conditions:	Pointers need to be created for each subclass(location).
** Post-Conditions: None
** Return:			Pointer to the location where user wants to go next.
*********************************************************************/
Location* Play::location_apartment(Location *currentLoc)
{
	int temp = 0;

	while ((temp != 1) || (temp != 2))
	{
		currentLoc->print();
		int selection;
		cout << "Please enter the number of where you want to go next. " << endl;
		cin >> selection;

		if (selection == 1)
		{
			return tower;
		}
		if (selection == 2){
			return subway;
		}
		temp = selection;
		cin.clear();
		cin.ignore();
	}
}

/*********************************************************************
** Function:		location_arcade(Location *currentLoc)
** Description:		This will display the locations surrounding the Arcade
					and allow user to choose which location they want to go to next.
** Parameters:		A pointer from the Abstract base class.
** Pre-Conditions:	Pointers need to be created for each subclass(location).
** Post-Conditions: None
** Return:			Pointer to the location where user wants to go next.
*********************************************************************/
Location* Play::location_arcade(Location *currentLoc)
{
	int holder = arcade->arcade_check_codes(apartment, tower);
	cout << holder << endl;

	if (holder == 0)
	{
		return NULL;
	}
	else{
		int temp = 0;
		while ((temp != 1) || (temp != 2))
		{
			int selection;
			cout << "Please enter the number of where you want to go next. " << endl;
			cin >> selection;

			if (selection == 1)
			{
				return tower;
			}
			if (selection == 2){
				return subway;
			}
			temp = selection;
			cin.clear();
			cin.ignore();
		}
	}
}

/*********************************************************************
** Function:		location_steel_mountain(Location *currentLoc)
** Description:		This will display the locations surrounding Steel Mountain
					and allow user to choose which location they want to go to next.
** Parameters:		A pointer from the Abstract base class.
** Pre-Conditions:	Pointers need to be created for each subclass(location).
** Post-Conditions: None
** Return:			Pointer to the location where user wants to go next.
*********************************************************************/
Location* Play::location_steel_mountain(Location *currentLoc)
{
	int temp = 0;

	while ((temp != 1) || (temp != 2))
	{
		currentLoc->print();
		int selection;
		cout << "Please enter the number of where you want to go next. " << endl;
		cin >> selection;

		if (selection == 1)
		{
			return allsafe;
		}
		if (selection == 2){
			return subway;
		}
		temp = selection;
		cin.clear();
		cin.ignore();
	}

}

/*********************************************************************
** Function:		choose_next(Location *currentLoc)
** Description:		I wanted to somehow split it into sepearte functions but did not have time.
					-This esentially runs the program. Each place the user goes to, what other locations that surround them, 
					are displayed to the console via this function.
					-If current your current location is XXXX (subway, Apartment, Allsafe, SteelMountain, DrumpfTower, arcade)
					point to roll_die, which allows user to select what they want to do in the location
					then when they are done, give them the options of where they can go next.
** Parameters:		A pointer from the Abstract base class.
** Pre-Conditions:	Pointers are created for each subclass(location). These pointer point to other methods/object
					in order for the user to 'do things' in the game.
** Post-Conditions: None
** Return:			Pointer, which is the location user is currently in.
*********************************************************************/

Location* Play::choose_next(Location *currentLoc)
{
	//---------------------------------------------------------------------------------
	//If current your current location is the Subway
	//point to roll_die, which allows user to select what they want to do in the location
	//then when they are done, give them the options of where they can go next. 
	if (currentLoc->name() == subway->name())
	{
		if (subway->getVector() == false)	//if subway is not in the vector and you have not been there...
		{
			currentLoc->roll_die();
			cout << "testing choose_next function" << endl;
			return location_subway(currentLoc);
		}
		else
		{
			cout << "testing choose_next function" << endl;
			return location_subway(currentLoc);
		}
	}
	//-----------------------------------------------------------------------
	//If current your current location is allsafe
	if (currentLoc->name() == allsafe->name())
	{
		if (allsafe->getVector() == false)	//if allsafe is not in the vector and you have not been there...
		{
			cout << "--------------------------------------------------------" << endl;
			cout << "Allsafe is the cybersecurity firm hired to protect Drumpf Corp." << endl;
			cout << "Because this hack has revolutionary potential, fsociety, and its partner the Dark Army, wants to keep tabs on Allsafe. " << endl;
			cout << "You need to somehow get this cd installed on an Allsafe Computer, so we can infect them and keep tabs on them. " << endl;

			currentLoc->yes_no_funct("Are you ready?");

			currentLoc->roll_die();
			cout << "testing choose_next function" << endl;
			return location_allsafe(currentLoc);
		}
		else
		{
			cout << "testing choose_next function" << endl;
			return location_allsafe(currentLoc);
		}
	}

	//--------------------------------------------------------------------------------------
	//If current your current location is the apartment
	if (currentLoc->name() == apartment->name())
	{
		if (apartment->getVector() == false)	//if subway is not in the vector and you have not been there...
		{
			cout << "Mr.Robot left a clue in his apartment. We Think they're codes needed for the final hack " << endl;
			cout << "We believe that its on an old takeout menu. " << endl;
			cout << "Your mission is to retrieve this clue. " << endl;
			
			currentLoc->roll_die();
			currentLoc->setLocationVector2();
			cout << "testing choose_next function" << endl;
			return location_apartment(currentLoc);
		}
		else
		{
			cout << "testing choose_next function" << endl;
			return location_apartment(currentLoc);
		}

	}

	//---------------------------------------------------------------------------
	//If current your current location is the arcade
	if (currentLoc->name() == arcade->name())
	{
		return location_arcade(currentLoc);
	}
	//---------------------------------------------------------------------------------
	//If current your current location is Drumpf Tower

	if (currentLoc->name() == tower->name())
	{
		if (tower->getVector() == false)	//if subway is not in the vector and you have not been there...
		{
			cout << "You need to get a file. Here's the thing. Its in Drumpf Tower " << endl;
			cout << "The information was from one of our sources there but he has gone missing and we need it to pull off the hack. " << endl;
			cout << "Your Mission: Disguise yourself as an Drumpf employee and get that file " << endl;
			cout << "Good Luck soldier. " << endl;

			currentLoc->roll_die();
			currentLoc->setLocationVector2(); 
			cout << "testing choose_next function" << endl;
			return location_tower(currentLoc);
		}
		else
		{
			cout << "testing choose_next function" << endl;
			return location_tower(currentLoc);
		}
	}

	//---------------------------------------------------------------------------------
	//If current your current location is Steel Mountain
	if (currentLoc->name() == steel_mountain->name())
	{
		if (steel_mountain->getVector() == false)	//if subway is not in the vector and you have not been there...
		{
			cout << "Steel Mountain Storage facility is where Drumpf Corp keeps their magnetic tape backups. " << endl;
			cout << "If we can slowly raise the temperature enough, it will destroy those tapes. " << endl;
			cout << "Your mission: Attach a Raspberry Pi to the thermostat. " << endl;

			currentLoc->roll_die();
			currentLoc->setLocationVector2(); 
			cout << "testing choose_next function" << endl;
			return location_steel_mountain(currentLoc);
		}
		else
		{
			cout << "testing choose_next function" << endl;
			return location_steel_mountain(currentLoc);
		}
	}
}

Play::~Play()
{
	delete subway, apartment; 
	delete allsafe, arcade; 
	delete tower;
	delete steel_mountain;
}