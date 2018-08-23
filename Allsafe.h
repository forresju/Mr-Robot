/*
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	Creates a class Allsafe. It is a derived class of the class Location.
*/

#ifndef ALLSAFE_H
#define ALLSAFE_H

#include"location.h"
#include<iostream> 


class Allsafe :public Location
{
protected:
	string work_station;
public:

	string name();
	void roll_die();
	void set_work_station(string theWorkStation);
	string get_work_station();
};


#endif