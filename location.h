/*
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	Creates a class Location and specifies the members to implement a location. 
				This is a the base class.
*/

#ifndef LOCATION_H
#define LOCATION_H
#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::cout;

class Location
{
protected:
	Location *up;
	Location *down;
	Location *left;
	Location *right;

	string tower_code;
	vector<string>locationVector;

public:

	virtual string name() = 0;
	void the_code();


	//To see if user has both the codes from the apartment and the Tower.
	virtual void arcade_check_codes()
	{
		cout << "testing checking_codes testing testing. " << endl;
	}


	void setLocations(Location* theUp, Location* theDown, Location* theLeft, Location* theRight);
	Location* getUp();
	Location* getDown();
	Location* getLeft();
	Location* getRight();

	virtual void yes_no_funct(string place);

	virtual void roll_die()
	{
		cout << "TESTING die" << endl;
	}
	void print();
	void print2();

	void setLocationVector2();
	bool getVector();

};


#endif