/*
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	Creates a class Play and specifies the members to implement the Play class.
*/

#ifndef Play_H
#define Play_H


#include"location.h"
#include"Allsafe.h"
#include"Apartment.h"
#include"SteelMountain.h"
#include"DrumpfTower.h"
#include"Arcade.h"
#include"Subway.h"
#include"Intro.h"

#include<vector>
#include<iostream> 
#include<iomanip>
#include<string>

using namespace std;

class Play
{
public:
	//left variables public for time and simplicity purposes
	Subway *subway = new Subway();
	Allsafe *allsafe = new Allsafe();
	Apartment *apartment = new Apartment();
	Arcade *arcade = new Arcade();
	DrumpfTower *tower = new DrumpfTower();
	SteelMountain *steel_mountain = new SteelMountain();
	
	Location* setUpMap();

	Location* location_subway(Location *currentLoc);
	Location* location_allsafe(Location *currentLoc);
	Location* location_tower(Location *currentLoc);
	Location* location_apartment(Location *currentLoc);
	Location* location_arcade(Location *currentLoc);
	Location* location_steel_mountain(Location *currentLoc);

	Location* choose_next(Location *currentLoc);

	~Play();

};

#endif