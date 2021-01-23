#include "Platform.h"

void Platform::setName(string name) { this->name = name; }

void Platform::setManufacturer(string manu) { this->manu = manu; }

void Platform::setGames(int size) { this->gPtr = new Game[size]; }

string Platform::getName() { return this->name; }

string Platform::getManu() { return this->manu; }

Game* Platform::getPointer() { return this->gPtr; }

void Platform::displayUI(int size, Platform* Ptr)
{
	int num;
		cout << "Enter the Platform's name: ";
		cin >> name;
		cout << "Enter the Manufacturer's name: ";
		cin >> manu;
		cout << "Enter the number of Games: ";
		cin >> num;
		Ptr = new Platform(name, manu, num);
		cout << "---------------------------------------" << endl;
		for (int j = 0; j < num; j++)
		{
			this->getPointer()->displayUI(num, Ptr[j].getPointer());
		}
	
 }
