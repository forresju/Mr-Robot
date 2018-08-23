/*
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	Creates a class Subway. It is a derived class of the class Location.
*/


#ifndef SUBWAY_H
#define SUBWAY_H

#include"location.h"
#include"Allsafe.h"

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


class Subway :public Location
{
protected:
	string subway_door;
	string secret_tunnel;

public:

	void set_subway_door(string the_subway_door);
	string get_subway_door();

	void set_secret_tunnel(string the_secret_tunnel);
	string get_secret_tunnel();
	void yes_no_funct(string place);

	string name();
	void roll_die();

};


#endif