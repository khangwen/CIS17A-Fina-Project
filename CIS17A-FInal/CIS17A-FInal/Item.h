#pragma once
#include <string>
#include <iostream>

class Item
{
protected:
	std::string _name = "";
	std::string _description = "";
	int _healAmount;
public:
	Item(std::string name, std::string description);
	Item(std::string name, std::string description, int healamount);
	~Item();

	std::string getName() {	return _name; }
	std::string getDescription() { return _description; }
	int getHealAmount() { return _healAmount; }

};

