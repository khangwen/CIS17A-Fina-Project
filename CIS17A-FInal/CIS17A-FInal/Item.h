#pragma once
#include <string>
#include <iostream>

class Item
{
private:
	std::string _name;
	std::string _description;
public:
	Item(std::string name, std::string description);
	~Item();

	std::string getName() {	return _name; }
	std::string getDescription() { return _description; }
};

