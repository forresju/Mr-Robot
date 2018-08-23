/***********************************************************************
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	This file containts the code that sets a location and retrieves a location. 
				Contains the definition of the functions to implement the operations of the classes Location
***********************************************************************/


#include"location.h"


/*********************************************************************
** Function:		setLocationVector()
** Description:		Holds the locations of where the player has gone
** Parameters:		None
** Pre-Conditions:	None
** Post-Conditions: Modifies the vector in place
** Return:			None
*********************************************************************/
void Location::setLocationVector2()
{
	locationVector.push_back(this->name());

}

/*********************************************************************
** Function:		getVector()
** Description:		Searches if player has successfully been to a location.
					If Player has completed task in location, they will be prompted.
** Parameters:		None
** Pre-Conditions:	Player must have successfully complete task in a location for it to be in vector
** Post-Conditions: None
** Return:			True/False
*********************************************************************/
bool Location::getVector()
{
	if (find(locationVector.begin(), locationVector.end(), this->name()) != locationVector.end())
	{
		cout << this->name() << "You have already been to this location. You have nothing to do here. " << endl;
		return true;
	}
	else
	{
		cout << "name entered in vector is " << this->name() << endl;
		return false;
	}
}

/*********************************************************************
** Function:		print()
** Description:		displays where user can go relative to where they currently are
** Parameters:		None
** Pre-Conditions:	Initial Locations/pointers need to be set before this can work properly  
** Post-Conditions:	None
** Return:			None
*********************************************************************/
void Location::print()
{
	int count = 1;

	if (this->up != NULL)
	{
		cout << count << ". Up: " << this->up->name() << endl;
		count = count + 1;
	}

	if (this->down != NULL) {
		cout << count << ". Down: " << this->down->name() << endl;
		count = count + 1;
	}
	if (this->left != NULL){
		cout << count << ". Left: " << this->left->name() << endl;
		count = count + 1;
	}
	if (this->right != NULL)
	{
		cout << count << ". Right: " << this->right->name() << endl;
		count = count + 1;
	}
}

void Location::print2()
{
	cout << "Welcome to " << this->name() << endl;
}



/*********************************************************************
** Function:		setLocations()
** Description:		sets the pointers to other locations; to what is up, down, left, right from your current location
** Parameters:		pointer to what is up, down, left and right from your current location. 
** Pre-Conditions:	poiniter location names need to be coded somewhere in program and sent into this function
** Post-Conditions:	each location/object wil be able to access what location surround them. 
** Return:			None
*********************************************************************/
void Location::setLocations(Location* theUp, Location* theDown, Location* theLeft, Location* theRight)
{
	up = theUp;
	down = theDown;
	left = theLeft;
	right = theRight;
}

//returns the location that is up from the current location. 
Location* Location::getUp()
{
	return up;
}

//returns the location that is down from the current location. 
Location* Location::getDown()
{
	return down;
}

//returns the location that is to the left of the current location. 
Location* Location::getLeft()
{

	return left;
}

//returns the location that is to the right of the current location. 
Location* Location::getRight()
{
	return right;
}


/*********************************************************************
** Function:		yes_no_funct()
** Description:		A menu intended to ask user if they want to proceed with a mission
** Parameters:		a string defined by programmer. 
** Pre-Conditions:	None	
** Post-Conditions:	None
** Return:			None
*********************************************************************/
void Location::yes_no_funct(string place)
{
	//JUSTINE ITS THIS!! PROBABLY DOESNT COMPILE ON LINUX
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



