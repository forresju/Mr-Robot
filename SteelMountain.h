/*
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	Creates a class SteelMountain. It is a derived class of the class Location.
*/

#ifndef STEELMOUNTAIN_H
#define STEELMOUNTAIN_H

#include"location.h"
#include<iostream>

class SteelMountain :public Location
{
public:

	string name();
	void roll_die();
};



#endif