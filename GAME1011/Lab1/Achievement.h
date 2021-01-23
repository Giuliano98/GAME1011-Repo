#pragma once
#include <iostream>
using namespace std;
class Achievement
{
private:
	string title;
	string desc;
	int value;
public:
	Achievement()
	{
		title = "";
		desc = "";
		value = 0;
	}
	Achievement(string title, string desc, int value)
	{
		this->title = title;
		this->desc = desc;
		this->value = value;
	}

	void setTitle(string title);
	void setDesc(string desc);
	void setValue(int value);

	string getTitle() const;
	string getDesc() const;
	int getValue() const;

	void displayUI(int size, Achievement* Ptr);
};

