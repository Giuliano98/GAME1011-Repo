#pragma once
#include <iostream>
#include "Game.h"
using namespace std;

class Platform
{
private:
	string name;
	string manu;
	Game* gPtr;
public:
	Platform()
	{
		name = "";
		manu = "";
		gPtr = nullptr;
	}
	Platform(string name, string manu, int size)
	{
		this->name = name;
		this->manu = manu;
		this->gPtr = new Game[size];
	}
	void setName(string name);
	void setManufacturer(string manu);
	void setGames(int size);

	string getName();
	string getManu();
	Game* getPointer();

	void displayUI(int size, Platform* Ptr);
};
