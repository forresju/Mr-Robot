/*
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	Creates a class DrumpfTower. It is a derived class of the class Location.
*/

#ifndef DRUMPFTOWER_H
#define DRUMPFTOWER_H

#include"location.h"
#include<iostream>


class DrumpfTower :public Location
{
public:

	string name();
	void roll_die();

	//To Get and set codes once user has completed their mission in the Tower
	string get_tower_code();
	void set_tower_code(string the_tower_code);
};


#endif