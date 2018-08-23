#include"Apartment.h"
#include"DrumpfTower.h"

#ifndef ARCADE_H
#define ARCADE_H





#include"location.h"
#include<iostream> // to use cin and cout


class Arcade :public Location
{
protected:
	int apartment_code;
	string DrumpfTower_code;
public:
	string name();
	//void roll_die();
	//void execute_hack();
	void yes_no_funct(string place);

	//void set_apartment_code(string the_apartment_code);
	//string get_apartment_code();
	//void set_DrumpfTower_code(string the_DrumpfTower_code);
	//string get_DrumpfTower_code();

	int arcade_check_codes(Apartment *pApartment, DrumpfTower *pDrumpfTower);
};

#endif