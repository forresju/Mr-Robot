/********************************************************************************
File Name:	main.cpp
Programmer: Justine Forrest
Date:		12/6/2018
Description: calls the Play class and executes the game loop.
********************************************************************************/

#include"location.h"
#include"Allsafe.h"
#include"Apartment.h"
#include"SteelMountain.h"
#include"DrumpfTower.h"
#include"Arcade.h"
#include"Subway.h"
#include"Intro.h"
#include"Play.h"

#include<vector>
#include<iostream>
#include<iomanip>
#include<string>

using std::cin;
using std::cout;
using std::endl;

using namespace std;


int main() {

	Intro display_intro;
	display_intro.intro();
	display_intro.game_direction();

	Play play_game;

	int MAX_MOVES = 8;
	int num_moves = 0;
	Location *current_location;
	current_location = play_game.setUpMap();
	cin.clear();

	display_intro.map();


	// BEGIN: GAME LOOP
	while (num_moves < MAX_MOVES)
	{

		cout << "-------------------------------------------------------" << endl;
		num_moves += 1;

		//Display current location
		current_location->print2();

		//choose where to go and what to do in the location
		current_location = play_game.choose_next(current_location);

		//cout << "Testing Main!!!" << endl;

		//if the current location returns Null then the player has won
		if (current_location == NULL)
		{
			cout << "You've destroyed Drumpf Corp!!!" << endl;
			break;
		}

	}
	//if at the end of the game loop the current_location !=Null the the player has lost the game
	if (current_location != NULL)
	{
		cout << "You Loose " << endl;
	}

	system("pause");

	return 0;
}
