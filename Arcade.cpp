#include"Arcade.h"
#include"Apartment.h"
#include"DrumpfTower.h"

#include <ctime>
#include<string>
#include<iomanip>
#include<iostream> // to use cin and cout

using std::cin;
using std::cout;
using std::endl;

using namespace std;

string Arcade::name()
{
	return "The Arcade at Coney Island!";
}

/*********************************************************************
** Function: arcade_check_codes()
** Description: Checks to see if you have codes from DrumpFTower and from Appartment
If not, you have to go back and get it.
** Parameters:
** Pre-Conditions:
** Post-Conditions:
** Return:		None
*********************************************************************/

int Arcade::arcade_check_codes(Apartment *pApartment, DrumpfTower *pDrumpfTower)
{

	int check_apartment_code = pApartment->getCode();
	string check_tower_code = pDrumpfTower->get_tower_code();
	cout << "CHECKING CODE " << check_apartment_code << endl;

	if (check_apartment_code == 12 && check_tower_code == "QX")
	{
		cout << "Good you have the code to the Appartment and DrumpFTower" << endl;
		cout << "YOU WIN!! CONGRATULATIONS YOU HAVE MADE AMERICA SMART AGAIN!!" << endl;
		cout << "Ohh and by the way, Mr. Robot is your dead father!! " << endl;
		return 0;
	}
	if (check_apartment_code == 12 && check_tower_code != "QX"){
		cout << "Sorry. You need the codes from both DrumpFTower and the Appartment in order execute that hack, and you dont. " << endl;
		return 1;
	}
	if (check_tower_code == "QX" && check_apartment_code != 12){
		cout << "Sorry. You need the codes from both DrumpFTower and the Appartment in order execute that hack, and you dont. " << endl;
		return 1;
	}
	else{
		cout << "Sorry but you need bothe the codes from tha Apartment and DrumpfTower before you can execute the hack here at the arcade " << endl;
		return 1;
	}
}

void Arcade::yes_no_funct(string place)
{
	//cin.sync();
	cin.ignore();
	char answer;
	string temp = place;
	cout << "Do you have the codes from the " << place << "??" << endl;
	cout << "y/n" << endl;

	cin.get(answer);
	answer = toupper(answer);

	if (answer == 'Y')
	{
		cout << " good " << endl;
		//ask_appartment_code("DrumpfTower");
	}

	if (answer == 'N')
	{
		cout << " you have to go back and get the code " << endl;
	}

	else if ((answer != 'N') && (answer != 'Y'))
	{
		cout << "that was not a valid choice. Please try again. " << endl;
		cin.clear();
		cin.ignore();
		yes_no_funct(temp);
	}
}

//void execute_hack();
