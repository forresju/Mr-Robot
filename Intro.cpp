/**********************************************************************
Programmer:		Justine Forrest
Date:			12/6/2016
Description:	This file displays the game background, directions and map.
				Contains the definition of the functions to implement the operations of the classes Intro
**********************************************************************/

#include"Intro.h"



/*********************************************************************
** Function:		Intro()
** Description:		Simply displays an intro to the user
** Parameters:		None
** Pre-Conditions:	None
** Post-Conditions: None
** Return:			None
*********************************************************************/
void Intro::intro()
{
	cout << "Hello Friend....." << endl;
	cout << "I need something from you. " << endl;
	cout << "But be warned. There's no turning back...." << endl;


	cout << left << "           ___	 ___   ____   __    ____  ______  " << endl;
	cout << left << "||\\  //|| || || || || ||  || || \\  ||  ||   ||    " << endl;
	cout << left << "|| \\// || ||_|| ||_|| ||  || ||_// ||  ||   ||    " << endl;
	cout << left << "||     || || \\  || \\  ||  || || \\  ||  ||   ||    " << endl;
	cout << left << "||     || ||  \\ ||  \\ ||__|| ||_// ||__||   ||    " << endl;

}

/*********************************************************************
** Function:		map()
** Description:		Simply displays a map of the locations to the user
** Parameters:		None
** Pre-Conditions:	None
** Post-Conditions: None
** Return:			None
*********************************************************************/
void Intro::map()
{
	cout << "Here is your map and the list of locations you must visit in order to Execute the Final Hack. " << endl;

	cout << "---------------------------------------------------------------\n";
	cout << "|               |                            |                |\n";
	cout << "| SteelMountain |                            |                |\n";
	cout << "|    Data       |                            |    apartment   |\n";
	cout << "|  Storage      |                            |                |\n";
	cout << "|               |                            |                |\n";
	cout << "|---------------|                            |----------------|\n";
	cout << "|               |                            |                |\n";
	cout << "|  Allsafe      |                            |   DrumpfTower  |\n";
	cout << "|   Cyber       |         subway             |                |\n";
	cout << "|  Security     |                            |                |\n";
	cout << "|               |                            |                |\n";
	cout << "|---------------|                            |----------------|\n";
	cout << "|               |                            |                |\n";
	cout << "|               |                            |                |\n";
	cout << "|               |                            |    arcade      |\n";
	cout << "|               |                            |                |\n";
	cout << "|               |                            |                |\n";
	cout << "|               |                            |                |\n";
	cout << "---------------------------------------------------------------\n";


	cout << "--MR. ROB0T--" << endl;
	cout << "Your mission is to take down Drumpf Corp and make America Smart Again!!" << endl;
	cout << "Your first mission will start in the subway. There a surprise awaits you. Good Luck soldier. " << endl;
	cout << "Hit Enter to continue ";
	cin.get();


}

/*********************************************************************
** Function:		game_directions()
** Description:		Simply displays an directions to the user
** Parameters:		None
** Pre-Conditions:	None
** Post-Conditions: None
** Return:			None
*********************************************************************/
void Intro::game_direction()
{
	cout << endl;
	cout << endl;
	cout << "The government and their corporate masters do not want us to speak. But we are here to help. We are fsociety." << endl;
	cout << "Drumpf corporation is one of the largest corporation in the world. Fscoiety is an underground group of hackers determined to destroy them. " << endl;
	cout << "Your ultimate goal: To hack into Drumpf's businesses and files to take him down! " << endl;
	cout << "To do this: You will need to complete a series of hacks and missions before you execute the Revolutionary Hack that will take down Drumpf Corp." << endl;
	cout << "If you get to ambitious, self - assured and ahead of yourself, and you execute the final hack before all the missions are complete, you will loose. Jail Time!! " << endl;
	cout << "But if you succeed, and takedown Drumpf Corp, you will make America Smart Again!!" << endl;
	cout << "hit Enter to continue ";

}

