/*
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	Creates a class Apartment. It is a derived class of the class Location.
*/

#ifndef APARTMENT_H
#define APARTMENT_H

#include"location.h"
#include<iostream> 
#include<iomanip>
#include<string>

using namespace std;


class Apartment :public Location
{

protected:
	string fire;
	int code;

public:

	string name();
	void roll_die();
	string get_fire();
	void set_fire(string the_fire);

	//To Get and set codes once user has completed their mission in the Apartment
	int getCode();
	void setCode(int the_code);
};


#endif