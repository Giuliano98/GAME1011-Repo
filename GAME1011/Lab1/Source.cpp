#include <iostream>
#include "Platform.h"
#include "Game.h"
#include "Achievement.h"
using namespace std;


int main()
{
	int num, games, achi;
	Platform* pPtr;

	// store how many Platforms, Games and Achievements enter;
	cout << "You will enter the number of Platforms, Games and Achievements..." << endl;
	cout << "Platforms: ";
	cin >> num;
	/*cout << "Games: ";
	cin >> games;
	cout << "Achievements: ";
	cin >> achi;*/
	cout << endl;
	cout << "---------------------------------------" << endl;

	// create a Platform-array length num;
	pPtr = new Platform[num];
	for (int i = 0; i < num; i++)
	{
		pPtr[i].displayUI(num, pPtr);
	}
	//pPtr->displayUI(num, pPtr);
	cout << "---------------------------------------" << endl;
	

	return 0;
}