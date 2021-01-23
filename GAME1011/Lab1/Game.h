#pragma once
#include <iostream>
#include "Achievement.h"
using namespace std;
class Game
{
private:
	string name;
	string publ;
	string dev;
	Achievement* aPtr;

public:
	Game()
	{
		name = "";
		publ = "";
		dev = "";
		aPtr = nullptr;
	}
	Game(string name, string publ, string dev, int size)
	{
		this->name = name;
		this->publ = publ;
		this->dev = dev;
		aPtr = new Achievement[size];
	}

	void setName(string name);
	void setPublisher(string publ);
	void setDev(string dev);
	void setAchiement(int size);

	string getName();
	string getPubl();
	string getDev();
	Achievement* getPointer();

	void displayUI(int size, Game* Ptr);
};

