#include "Achievement.h"

void Achievement::setTitle(string title) { this->title = title; }

void Achievement::setDesc(string desc) { this->desc = desc; }

void Achievement::setValue(int value) { this->value = value; }

string Achievement::getTitle() const { return title; }

string Achievement::getDesc() const { return desc; }

int Achievement::getValue() const { return value; }

void Achievement::displayUI(int size, Achievement* Ptr)
{
	cout << "\t\tEnter the Achievement's title: ";
	cin >> title;
	cout << "\t\tEnter the Achievement's Description: ";
	cin >> desc;
	cout << "\t\tEnter the number of points: ";
	cin >> value;
	Ptr = new Achievement(title, desc, value);
	cout << "---------------------------------------" << endl;
}
