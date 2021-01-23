#include "Game.h"

void Game::setName(string name) { this->name = name; }

void Game::setPublisher(string publ) { this->publ = publ; }

void Game::setDev(string dev) { this->dev = dev; }

void Game::setAchiement(int size){ aPtr = new Achievement[size]; }

string Game::getName() { return this->name; }

string Game::getPubl() { return this->publ; }

string Game::getDev() { return this->dev; }

Achievement* Game::getPointer() { return aPtr; }

void Game::displayUI(int size, Game* Ptr)
{
	int	num;
		cout << "\tEnter the Game's name: ";
		cin >> name;
		cout << "\tEnter the Publisher's name: ";
		cin >> publ;
		cout << "\tEnter the Developer's name: ";
		cin >> dev;
		cout << "\tEnter the number of Achievement: ";
		cin >> num;
		Ptr = new Game(name, publ, dev, num);
		cout << "---------------------------------------" << endl;
		for (int j = 0; j < num; j++)
		{
			this->getPointer()->displayUI(num, Ptr[j].getPointer());
		}
		
}
